all:
	gcc -Wall -pedantic -std=c99 -lncurses -o evidencer evidencer.c

run: all
	./evidencer

clean:
	rm evidencer

.PHONY: all run clean
