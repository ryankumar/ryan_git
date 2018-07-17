
all:bin/main
bin/main:src/main.o add/add.o sub/sub.o
	 gcc src/main.o add/add.o sub/sub.o -o bin/main
src/main.o:
	make -C src
add/add.o:
	make -C add
sub/sub.o:
	 make -C sub
clean:
	make -C src clean 
	make -C add clean
	make -C sub clean
install:
	sudo cp bin/main /usr/bin

