#include <iostream>
#include <stdio.h>
using namespace std;

long long int gcd(long long int a,long long int b)
{
	long long int t;

	while(b!=0)
	{
		t=b;
		b=a%b;
		a=t;
	}

	return a;
}

int main()
{
	long long int t;
	long long int array[100001],result,n,i;
	scanf("%lld",&t);

	while(t--)
	{
		scanf("%lld",&n);

		for(i=0;i<n;i++)
		{
			scanf("%lld",&array[i]);
		}

		if(n==1)
		{
			printf("%lld\n",array[0]);
		}
		else
		{
			if(n==2)
			{
				result=gcd(array[0],array[1]);
				printf("%lld\n",result*2);
			}
			else
			{
				result=gcd(array[0],array[1]);
				for(i=2;i<n;i++)
				{
					result=gcd(array[i],result);
				}
				printf("%lld\n",result*n);
			}
		}
	}

	return 0;
}