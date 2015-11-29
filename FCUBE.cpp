/*
Wrong Answer + Tle
*/

#include <iostream>
#include <stdio.h>
#include <math.h>
#define mod 1000000007
using namespace std;

int  is_perfect_cube(long long int n) {
    long long int root(round(cbrt(n)));
    if(n==root*root*root)	return 1;
    else return 0;
}

int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int n,i,arr[101];
		long long int sum=1;

		scanf("%lld",&n);

		for(i=1;i<=n;i++)	
		{
			scanf("%lld",&arr[i]);
			sum=(sum%mod*arr[i]%mod)%mod;
		}
		
		long long int mul_fact=1,flag=0,temp;
		temp=sum;
		while(1)
		{
			if(is_perfect_cube(temp)==1)	
			{
				flag=1;
				break;
			}	
			else
			{
				mul_fact=mul_fact+1;
				temp=(sum%mod*mul_fact%mod)%mod;
			}
		}
		

		if(flag==1)
		{
			printf("%lld\n",temp);
		}

	}

	return 0;
}