# Make file to Hello World software

ASM = as
CC = gcc
CFLAGS=-Wall-I


hello: hello.o
	$(CC) $(CFLAGS) -o hello hello.o
	

hello.o: HelloWorld.s
	$(ASM) -o hello.o HelloWorld.s



clean:
	rm *.o
	rm hello



