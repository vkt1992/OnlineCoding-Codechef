#include <iostream>
#include <stdio.h>
using namespace std;
 
long long int arr[5005][5005];

int main()
{
	int t,i,j,x,y;
	scanf("%d%d",&x,&y);
 
	for(i=0;i<=5000;i++)
	{
		arr[i][0]=0;
		arr[0][i]=0;
	}
 
	for(i=1;i<=5001;i++)
	{
		for(j=1;j<=5001;j++)
		{
			if(i==1 && j==1)	arr[i][j]=1;
			else
			{
				arr[i][j]=arr[i][j-1]+arr[i-1][j];
			}
		}
	}
 

	printf("%lld\n",arr[x+1][y+1]);
 
	return 0;
} 