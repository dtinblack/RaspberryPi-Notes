# class that returns a "hello world" message

class HelloWorld:

    def __init__(self, txt):
        self.txt = txt

    def msg(self):
        return self.txt + 'hello world!'
