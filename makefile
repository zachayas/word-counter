program: word-counter.o
	 gcc HayashidaZac11.o -o program

HayashidaZac11.o: word-counter.c
		  gcc -c HayashidaZac11.c
