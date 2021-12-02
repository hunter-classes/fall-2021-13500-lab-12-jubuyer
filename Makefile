#recipes
CC = g++
CFLAGS  = -std=c++11 -Wall

main: main.o vectors.o optimism.o
	$(CC) $(CFLAGS) -o $@ $^

tests: tests.o vectors.o optimism.o
	$(CC) $(CFLAGS) -o $@ $^

vectors.o: vectors.cpp
	$(CC) $(CFLAGS) -c $^

optimism.o: optimism.cpp
	$(CC) $(CFLAGS) -c $^

tests.o: tests.cpp
	$(CC) $(CFLAGS) -c $^

main.o: main.cpp
	$(CC) $(CFLAGS) -c $^

.PHONY: clean

clean:
	rm -f *o main tests a.out
