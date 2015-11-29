// vkthakur0590@gmail.com

#include <iostream>
#include <stdio.h>
#include <map>
using namespace std;

int abs(int x,int y)
{
	if(x > y)
		return (x-y);
	else
		return (y-x);
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i,j,pos;
		map<int,int>m_x;
		map<int,int>m_y;

		scanf("%d",&n);

		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				scanf("%d",&pos);
				m_x[pos]=i;
				m_y[pos]=j;
			}
		}


		int ans=0,past_x=1,past_y=1;
		i=1;

		while(i<=n*n)
		{
			pos=i;
			ans=ans + abs(past_x,m_x[pos]) + abs(past_y,m_y[pos]);
			past_x=m_x[pos];
			past_y=m_y[pos]; 
			i++;
		}

		printf("%d\n",ans);
	}
	return 0;
}