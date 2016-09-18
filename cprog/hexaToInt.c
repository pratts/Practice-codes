#include<math.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
int main(int argc, char **argv) {
	char s[256];
	fgets(s, 256, stdin);
	int i=strlen(s) - 1, j=0;
	long sum = 0;
	printf("size %d\n", i);
	while(j < i) {
		if((s[j] >= 'a' && s[j] <= 'f') || (s[j] >= 'A' && s[j] <= 'F')) {
			sum += (10 + tolower(s[j]) - 'a') * (pow(16, (i-j)-1));
		} else if(s[j] >= '0' && s[j] <= '9') {
			sum += (s[j] - '0') * (pow(16, (i-j)-1));
		}	

		printf("%d  %ld\n", j, sum);
		j++;
	}

	printf("%ld", sum);
	return 0;
}
