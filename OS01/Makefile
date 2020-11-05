all : search

search : search.o
	gcc -o search search.o

search.o : search.c
	gcc -c -o search.o search.c

clean :
	rm*.o search

