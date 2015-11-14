//Rat in a maze problem
#include <stdio.h>
#define N 4

void print(int sol[N][N])
{
	int i,j;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%d ",sol[i][j]);
		}printf("\n");
	}
}

int issafe(int maze[N][N],int x,int y)
{
	if(x>=0 && x<N && y>=0 && y<N && maze[x][y]==1)
		return 1;
	else
		return 0;
}

int ratsolve(int maze[N][N],int x,int y,int sol[N][N])
{
	if(x==N-1 && y==N-1)
	{
		return 1;
	}
	if(issafe(maze,x,y)==1)
	{
		sol[x][y]=1;
		if(ratsolve(maze,x+1,y,sol)==1)
		{
			return 1;
		}
		if(ratsolve(maze,x,y+1,sol)==1)
		{
			return 1;
		}
		sol[x][y]=0;
		return 0;
	}
	return 0;
}

void solveMaze(int maze[N][N])
{
	int sol[N][N]={{0,0,0,0},
				 {0,0,0,0},
				 {0,0,0,0},
				 {0,0,0,0}	
				};
	if(ratsolve(maze,0,0,sol)==1)
	{
		print(sol);
		return;
	}
	else
	{
		printf("No solution");
		return;
	}
}
	
int main()
{
    int maze[N][N]  =  { 
							{1, 0, 0, 0},
							{1, 1, 0, 1},
							{0, 1, 0, 0},
							{1, 1, 1, 1}
						};
 
    solveMaze(maze);
    getchar();
    return 0;
}
