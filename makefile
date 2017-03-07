CC = g++ -Wall
all: main.o  implementacja1.o
	$(CC) main.o -g implementacja1.o -o test

main.o: main.cpp naglowek1.h
	$(CC) main.cpp -c -g -o main.o

implementacja1.o: implementacja1.cpp naglowek1.h
	$(CC) implementacja1.cpp -c -g -o implementacja1.o

clean:
	rm -f *.o test
