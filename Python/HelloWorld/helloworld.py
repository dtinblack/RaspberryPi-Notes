# Calls the module myclass and uses the class HelloWorld to output a message

from myclass import HelloWorld   # import the class HelloWorld

def main():
    out = HelloWorld('test: ').msg()
    print( out )


if __name__ == "__main__":
    print("Executing as main program")
    main()
#    print( HelloWorld('test: ').msg() )
