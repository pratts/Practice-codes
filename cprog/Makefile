CFLAGS=-Wall -g

all: clean
	cc $(CFLAGS) _1-3.c -o _1-3
	cc $(CFLAGS) checkGetcharEOF.c -o checkGetcharEOF
	cc $(CFLAGS) getSetChar.c -o getSetChar
	cc $(CFLAGS) printEOF.c -o printEOF
clean:
	rm -f _*.o 
	find . -type f -executable -exec rm {} +
