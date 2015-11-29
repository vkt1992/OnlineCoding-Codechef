#include <iostream>
#include <stdio.h>

long long int r[100001],r1[100001];

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int i,n;
		scanf("%d",&n);
		
		for(i=1;i<=n;i++)
		{
			r[i]=0;
			scanf("%lld",&r1[i]);
		}

		for(i=1;i<=n-1;i++)
		{
			if(r1[i]!=r1[i+1])
			{
				r[i]=1;
				r[i+1]=1;
			}
		}
		
		long long int cnt=0;	
		for(i=1;i<=n;i++)
		{
			cnt=cnt+r[i];
		}

		printf("%lld\n",cnt);
		
	}
	
	return 0;
}
		
