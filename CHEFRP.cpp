#include <iostream>
#include <algorithm>
#include <functional>
#include <stdio.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,arr[100001],i,flag=0;
		scanf("%lld",&n);

		for(i=0;i<n;i++)
		{
			scanf("%lld",&arr[i]);
			if(arr[i] < 2)
			{
				flag=1;
			}
		}

		if(flag==1)	printf("-1\n");
		else
		{
			sort(arr,arr+n,greater<int>());

			long long int sum=0;

			for(i=0;i<n-1;i++)
			{
				sum=sum+arr[i];
			}

			printf("%lld\n",sum+2);
		}

	}
	return 0;
}
