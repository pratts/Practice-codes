#include<stdio.h>

void setBits(unsigned int x, int p, int n, unsigned int y) {
	y = (~(~0 << n) & y) << (p - n);
	x = x & ~((~(~0 << n)) << (p - n));

	printf("%d\n", x| y);
}

int main(int argc, char **argv) {
	setBits(181, 4, 3, 3);
	setBits(47, 5, 2, 1);
	return 0;
}
