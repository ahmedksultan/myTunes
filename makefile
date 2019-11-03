ifdef MEM
	DATA  = -g
	VG = valgrind --leak-check=full
endif

all: main.o list.o library.o
	gcc $(DATA) -o program main.o list.o library.o

main.o: main.c list.h
	gcc $(DATA) -c main.c list.c

list.o: list.c list.h
	gcc $(DATA) -c list.c

library.o: library.c library.h
	gcc $(DATA) -c library.c

run:
	$(VG) ./program

clean:
	rm *.o
	rm program
