program: word-counter.o
	 gcc word-counter.o -o program

word-counter.o: word-counter.c
		  gcc -c  word-counter.c
