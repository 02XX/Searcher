from PySide6.QtUiTools import QUiLoader
from PySide6.QtCore import QObject, Signal
from PySide6.QtWidgets import QApplication, QWidget
from threading import Thread
from crawl.crawlCore import Crawl
from crawl import crawlException
class MySignal(QObject):
    text_print = Signal(dict)
    error = Signal(str)


class MainWindows:
    def __init__(self):
        super().__init__()

        self.ui_path = r"./UI/main.ui"
        self.ui = QUiLoader().load(self.ui_path)
        self.global_signal = MySignal()
        #Event
        self.ui.search.clicked.connect(self.crawl)
        self.global_signal.text_print.connect(self.print_answer)
        self.global_signal.error.connect(self.print_error)
        self.ui.q.returnPressed.connect(self.crawl)
    def crawl(self):
        def start():
            try:
                r = Crawl(self.get_question())
                answer = r.tidy_answer()
                self.global_signal.text_print.emit(answer)
            except crawlException.ServerConnectFailed as se:
                self.global_signal.error.emit(se.message)
            except crawlException.ParameterError as pe:
                self.global_signal.error.emit(pe.message)
            except crawlException.NoSuchQuestion as ne:
                self.global_signal.error.emit(ne.message)
            except:
                self.global_signal.error.emit("未知错误")
        thread_crawl = Thread(target= start)
        if not thread_crawl.is_alive():
            thread_crawl.start()


    def get_question(self):
        return self.ui.q.text()

    def print_answer(self, d):
        self.ui.question.clear()
        self.ui.answer.clear()
        self.ui.question.append(d["question"])
        self.ui.answer.append(d["answer"])
    def print_error(self, e):
        self.ui.question.clear()
        self.ui.answer.clear()
        self.ui.question.append("发生错误，错误如下")
        self.ui.answer.append(e)  
    





app = QApplication()


window = MainWindows()


window.ui.show()

app.exec_()