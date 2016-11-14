import unittest
from myclass import HelloWorld   # import the class HelloWorld

class TestHelloWorld(unittest.TestCase):

    def test_helloworld(self):
        tst = HelloWorld('test: ')
        self.assertEqual('test: hello world!', tst.msg())


if __name__ == '__main__':
    unittest.main()
