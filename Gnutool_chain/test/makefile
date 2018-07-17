all:bin/main2
bin/main2: main.o sub.o add.o
	gcc main.o sub.o add.o -o  bin/main2
main.o: main.c
	gcc -c main.c 
add.o: add.c
	gcc -c add.c 
sub.o: sub.c
	gcc -c sub.c 
clean:
	rm *.o

