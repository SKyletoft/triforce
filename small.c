#include <stdio.h>

const char* DEFAULT =
" [33m◢◣[0m\n"
"[33m◢◣[0m[33m◢◣[0m";

const char* LINK =
" [33m◢◣[0m\n"
"[33m◢◣[0m[32m◢◣[0m";

const char* ZELDA =
" [33m◢◣[0m\n"
"[34m◢◣[0m[33m◢◣[0m";

const char* GANON =
" [31m◢◣[0m\n"
"[33m◢◣[0m[33m◢◣[0m";

int main(int argc, char** argv) {
	if (argc != 2) {
		puts(DEFAULT);
		return 0;
	}
	switch (argv[1][0]) {
		case 'l': puts(LINK); break;
		case 'z': puts(ZELDA); break;
		case 'g': puts(GANON); break;
		default: puts(DEFAULT); break;
	}
}
