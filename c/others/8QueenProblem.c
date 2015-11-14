//8 Queen problems
#include <stdio.h>
#define N 8

void print(int board[N][N])
{
	int i,j;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%d ",board[i][j]);
		}printf("\n");
	}
}

int issafe(int board[N][N],int row,int col)
{
	int i,j;
	for(i=0;i<=col;i++)
	{
		if(board[row][i]==1)
		{
			return 0;
		}
	}
	
	for(i=row,j=col;i>=0 && j>=0;i--,j--)
	{
		if(board[i][j]==1)
		{
			return 0;
		}
	}
	for(i=row,j=col;i<N && j>=0;i++,j--)
	{
		if(board[i][j]==1)
		{
			return 0;
		}
	}
	return 1;
}

int check8queen(int board[N][N],int col)
{
	if(col>=N)
	{
		return 1;
	}
	else
	{
		int i=0;
		for(i=0;i<N;i++)
		{
			if(issafe(board,i,col)==1)
			{
				board[i][col]=1;
				if(check8queen(board,col+1)==1)
					return 1;
				board[i][col]=0;
			}
		}
	}
	return 0;
}

void eightqueen()
{
	int board[N][N],i,j;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			board[i][j]=0;
		}
	}
	if(check8queen(board,0)==1)
	{
		print(board);
		return ;
		printf("\n\n");
	}
	else
	{
		printf("No configuration");
	}
}

int main()
{
	eightqueen();
	return 0;
}
