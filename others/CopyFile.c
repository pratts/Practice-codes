//Copy file in c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *read=fopen("input.in","r");
	FILE *write=fopen("output.out","w");
	printf("Files opened successfully\n");
	
	char src[256],dest[256];
	
	while(fgets(src,sizeof(src),read)!=NULL)
	{
		printf("%s\n",src);
		fputs(src,stdout);
		strcpy(dest,src);
		
		fprintf(write,"%s",dest);
	}
	fclose(read);
	fclose(write);

	return 0;
}
