#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char str[]="pra/te/asdaf/acsd//asdacdas/";
	char *s=strtok(str,"/");
	while(s!=NULL)
	{
		printf("%s\n",s);
		s=strtok(NULL,"/");
	}
	exit(EXIT_SUCCESS);
}
