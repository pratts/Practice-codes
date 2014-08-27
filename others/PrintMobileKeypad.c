//print the number corresponding to the character given on the mobile keypad
#include <stdio.h>
#include <ctype.h>

void print(char s[],int n)
{
	char map[8][2]={
			{'a','c'},
			{'d','f'},
			{'g','i'},
			{'j','l'},
			{'m','o'},
			{'p','s'},
			{'t','v'},
			{'w','z'}
		};
	int i,j;
	printf("%s: ",s);
	for(i=0;i<n;i++)
	{
		for(j=0;j<8;j++)
		{
			char temp=tolower(s[i]);
			if(map[j][0]<=temp && map[j][1]>=temp)
			{
				printf("%d",j+2);
				break;
			}
		}
	}
}	
	
int main()
{
	int T;
	scanf("%d",&T);

	while(T>0)
	{
		int n;
		scanf("%d",&n);
		char str[n];
		scanf("%s",str);
		print(str,n);
		printf("\n");
		T--;
	}
	return 0;
}
