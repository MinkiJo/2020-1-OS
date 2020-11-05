all : myshell sum sub div fact

myshell : myshell.o
	gcc -o myshell myshell.o
myhsell.o : myshell.c
	gcc -c -o myshell.o myshell.c

sum : sum.o
	gcc -o sum sum.o

sum.o : sum.c
	gcc -c -o sum.o sum.c

sub : sub.o
	gcc -o sub sub.o


sub.o : sub.c
	gcc -c -o sub.o sub.c

div : div.o
	gcc -o div div.o

div.o : div.c
	gcc -c -o div.o div.c

fact : fact.o
	gcc -o fact fact.o

fact.o : fact.c
	gcc -c -o fact.o fact.c


