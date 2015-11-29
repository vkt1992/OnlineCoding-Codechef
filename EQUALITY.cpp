#include <iostream>
#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,arr[50001],i,sum=0,dne;
		scanf("%lld",&n);

		for(i=1;i<=n;i++)
		{
			scanf("%lld",&arr[i]);
			sum=sum+arr[i];
		}

		sum=sum/(n-1);

		for(i=1;i<=n;i++)
		{
			dne=sum-arr[i];
			printf("%lld ",dne);
		}

		printf("\n");
	}
	return 0;
}