# Example make file to build and compile an executable program

CC=gcc
CFLAGS=-Wall -I.

helloworld: hello_main.o hello_function.o
	$(CC) $(CFLAGS) -o helloworld hello_main.o hello_function.o          


clean:
	rm *.o
	rm helloworld
