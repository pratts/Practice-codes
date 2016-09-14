#include<stdio.h>

int main(int argc, char **argv) {
	printf("%ld\n", -1L);
	printf("%lu\n", -1U);
	printf("%lu\n", -1UL);
	printf("%d\n", (-1L < 1U));
	printf("%d\n", (-1L < 1UL));
	return 0;
}
