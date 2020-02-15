CFLAGS=-g -O2

test: listTest.o llist.o
	cc -o test listTest.o llist.o
clean:
	rm *.o test

llist.o: llist.c llist.h
listTest: listTest.c llist.h
