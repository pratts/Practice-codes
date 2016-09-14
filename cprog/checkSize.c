#include<stdio.h>

int main(int argc, char **argv) {
	printf("sizeof char\t%lu\n", sizeof(char));
	printf("sizeof int\t%lu\n", sizeof(int));
	printf("sizeof float\t%lu\n", sizeof(float));
	printf("sizeof double\t%lu\n", sizeof(double));
	printf("sizeof long\t%lu\n", sizeof(long));
	printf("sizeof short\t%lu\n", sizeof(short));
	printf("unsigned long\t%lu\n", sizeof(unsigned long));	
	return 0;
}
