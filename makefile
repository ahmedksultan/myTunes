ifdef MEM
	DATA  = -g
	VG = valgrind --leak-check=full
endif

all: main.o list.o
	gcc $(DATA) -o program main.o list.o

main.o: main.c list.h
	gcc $(DATA) -c main.c list.c

list.o: list.c list.h
	gcc $(DATA) -c list.c

run:
	$(VG) ./program

clean:
	rm *.o
	rm program
