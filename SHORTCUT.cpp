#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int t,arr[16][16],i,j;
	scanf("%d",&t);

	for(i=0;i<=15;i++)
	{
		arr[i][0]=0;
		arr[0][i]=0;
	}

	for(i=1;i<=15;i++)
	{
		for(j=1;j<=15;j++)
		{
			if(i==1 && j==1)	arr[i][j]=1;
			else
			{
				arr[i][j]=arr[i][j-1]+arr[i-1][j];
			}
		}
	}

	while(t--)
	{
		int m;
		scanf("%d",&m);
		printf("%d\n",arr[m+1][m+1]);
	}

	return 0;
}