all:
	gcc -fpic -c add.c
	gcc -fpic -c sub.c
	gcc -shared add.o sub.o -o libaddsub.so

clean:
	rm add.o sub.o

