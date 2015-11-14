//Delete a file in C

#include <stdio.h>

int main()
{
	if(remove("sample.in")==-1)
	{
		printf("Error deleting file");
	}
	else
	{
		printf("File deleted");
	}
	return 0;
}
