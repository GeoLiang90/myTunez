all: driver.o linkedlist.o array.o
	gcc -o test driver.o linkedlist.o array.o	

driver.o: driver.c linkedlist.h
	gcc -c driver.c linkedlist.h

linkedlist.o: linkedlist.c linkedlist.h
	gcc -c linkedlist.c linkedlist.h

array.o: array.c linkedlist.h
	gcc -c array.c linkedlist.h

run: 
	./test

clear:
	rm *.o
