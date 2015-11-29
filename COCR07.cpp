#include <stdio.h>
#include <map>
#include <iostream>
using namespace std;

map<int,int>st;

int main()
{
	int n,k,i,a,count=0;
	scanf("%d%d",&n,&k);

	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		if(a%2!=0 && a < k)
		{
			if(!st[a])
			{
				count++;
				st[a]=1;
			}
		}
	}

	printf("%d\n",count);
	return 0;

}