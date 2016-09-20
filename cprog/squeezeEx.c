#include<stdio.h>

void squeezeAlt(char s1[], char s2[]) {
	int k=0;
	while(s1[k] != '\0') {
		int s = s1[k];
		int i=0, j=0;
		for(;s2[i] != '\0';i++) {
			printf("hellow-->%c\t%c\t%d\t\t%d\n", s, s2[i], i, j);
			if(s2[i] != s) {
				s2[j++] = s2[i];
			}
		}
		//s2[j] = '\0';
		k++;
	}	
	printf("%s\n", s2);
}

int main(int argc, char **argv) {
	squeezeAlt("hello", "world");
	return 0;
}
