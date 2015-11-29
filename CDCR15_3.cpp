/*
********************************************************
VIVEK KUMAR THAKUR
ARMY INSTITUTE OF TECHNOLOGY
VERDICT:ERROR
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

int dim[101][101],lx,ly,hx,hy,n,m,flag;
long long int max_turns=999999999;

void dfs(int x,int y,int turns)
{
	if(x>=n && y<= m) 
	{
		if(x==lx && y==ly)
		{
			if(max_turns >= turns)
			{
				max_turns=turns;
			}
		}
		else if(dim[x][y]==1)
		{
			return ;
		}
		else 
		{
			dfs(x,y+1,turns);
			dfs(x,y-1,turns);
			dfs(x-1,y,turns+1);
			dfs(x+1,y,turns+1);
		}
	}
	else
	{
		return ;
	}
}


int  main()
{
	int i,j;
	scanf("%d%d",&n,&m);

	for(j=1;j<=n;j++)
	{
		char str[105];
		scanf("%s",str);

		for(i=0;i<m;i++)
		{
			if(str[i]=='.')
			{
				dim[j][i+1]=1;
			}
			else if(str[i]=='*')
			{
				dim[j][i+1]=0;
			}
			else if(str[i]=='L')
			{
				lx=j;
				ly=i+1;
				dim[j][i+1]=0;
			}
			else if(str[i]=='H')
			{
				hx=j;
				hy=i+1;
				dim[j][i+1]=0;
			}
		}
	}

	dfs(hx,hy,0);

	printf("%lld\n",max_turns);

	return 0;
}