#include<stdio.h>

enum Sample {
	START=1,
	END=2,
	PAUSE=3
};

int main(int argc, char **argv) {
	enum Sample spl = PAUSE;	
	printf("%d\n", spl);
	return 0;
}
