//nested structures
#include <stdio.h>
struct a
{
	int x;
	struct b
	{
		int y,z;
	}b1;
};

int main()
{
	struct b b1={1,2};
	printf("%d %d",b1.y,b1.z);
	
	struct a a1={3};
	printf("\n%d",a1.x);
	return 0;
}
