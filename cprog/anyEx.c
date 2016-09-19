//exercise 2-4
#include<stdio.h>

int any(char s1[], char s2[]) {
	int i=0, j=0;

	while(s2[j] != '\0') {
		while(s1[i] != '\0') {
			if(s1[i] == s2[j])
				return i + 1;
			i++;
		}
		i = 0;
		j++;
	}
	return 0;
}
int main(int argc, char ** argv) {
	printf("%d\n", any("hello", "world"));	
	return 0;
}
