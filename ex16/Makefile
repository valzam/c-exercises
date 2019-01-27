CFLAGS=-Wall -g

all:
	make clean
	make main
	./main

clean:
	rm -f main

debug:
	make clean
	make main
	gdb --batch --ex run --ex bt --ex q --args ./main
