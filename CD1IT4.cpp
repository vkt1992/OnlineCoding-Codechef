/*
********************************************************
VIVEK KUMAR THAKUR
ARMY INSTITUTE OF TECHNOLOGY
*********************************************************
*/


#include <iostream>
#include <stdio.h>
#include <math.h>
#include <utility>
#include <algorithm>
#include <set>
#include <queue>
#include <vector>
#include <stack>
#include <map>
#include <stdlib.h>
using namespace std;
#define MOD 1000000007

long long int arr[1001][1001],blocked[1001][1001];

int  main()
{
	long long int m,n,p,i,j;

	scanf("%lld%lld%lld",&m,&n,&p);

	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
			{
				arr[i][j]=0;
				blocked[i][j]=0;
			}
	}

	for(i=0;i<p;i++)
	{
		int x,y;
		scanf("%d%d",&x,&y);
		blocked[x][y]=1;
	}

	if(m==1 && n==1 && p==1)	printf("0\n");
	else if(blocked[1][1]==1)	printf("0\n");
	else
	{

	arr[1][1]=1;

	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(blocked[i][j]==0)
			{
				
				if(i==1 && j==1)
				{
					
				}
				else
				{
					arr[i][j]=(arr[i-1][j] + arr[i][j-1]);
				}
			}
		}
	}

	printf("%lld\n",arr[m][n]);


	}

	return 0;
}