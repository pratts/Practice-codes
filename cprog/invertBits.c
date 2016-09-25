#include<stdio.h>

void setBits(unsigned int x, int p, int n, unsigned int y) {
        y = (~(~0 << n) & y) << (p - n);
        x = x & ~((~(~0 << n)) << (p - n));

	printf("%d\n", x| y);
}

void invert(unsigned int x, int p, int n) {
	int y = 0 | (~x >> (p-n));
	printf("%d\n", y);
	setBits(x, p, n, ~x >> (p-n+1));
}
int main(int argc, char **argv) {
	invert(181, 4, 3); 
	return 0;
}
