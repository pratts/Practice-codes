#include<stdio.h>

int main(int argc, char **argv) {
	int i=0;
	for(;i<130;i++) {
		printf("%d\t%c\n", i, (char)i);
	}
	return 0;
}
