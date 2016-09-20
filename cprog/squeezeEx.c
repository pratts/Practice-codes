#include<stdio.h>

void squeezeAlt(char s1[], char s2[]) {
	int k=0;
	while(s1[k] != '\0') {
		int s = s1[k];
		int i=0, j=0;
		for(;s2[i] != '\0';i++) {
			if(s2[i] != s) {
				s2[j++] = s2[i];
			}
		}
		s2[j] = '\0';
		k++;
	}	
}

void squeezeChar(char s1[], int s) {
	int i=0, j=0;
	for(;s1[i] != '\0';i++) {
		if(s1[i] != s) {
			s1[j++] = s1[i];
		}
	}
	s1[j] = '\0';
}
int main(int argc, char **argv) {
	char s[]="hello";
	//squeezeChar(s, 'l');
	squeezeAlt("world", s);
	printf("%s\n", s);
	return 0;
}
