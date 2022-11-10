large: large.c
	gcc -Os large.c -o large
	strip large

small: small.c
	gcc -Os small.c -o small
	strip small
