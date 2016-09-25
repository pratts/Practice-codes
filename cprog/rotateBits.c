#include<stdio.h>

void rightrot(unsigned int x, int n) {
	printf("%u\n", ((x >> n) | (x << (sizeof(unsigned int) * 8 - n))));
}

int main(int argc, char **argv) {
	rightrot(47, 2);
	return 0;	
}
