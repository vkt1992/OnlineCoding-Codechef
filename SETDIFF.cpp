#include <iostream>
#include <stdio.h>
#include <math.h>
#include <algorithm>
#define MOD 1000000007
using namespace std;

long long int power(long long int base,long long int exp) {
    long long int res=1;
    while(exp>0) {
       if(exp%2==1) 
       {
       		res=(res*base)%MOD;
       }
       base=(base*base)%MOD;
       exp/=2;
    }
    return res%MOD;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,set[100007],i;
		scanf("%lld",&n);

		for(i=0;i<n;i++)
		{
			scanf("%lld",&set[i]);
		}

		sort(set,set+n);
		long long int set_max=0,set_min=0,set_diff=0,pow_2=0;

		for(i=0;i<n;i++)
		{
			pow_2=(power(2,n-i-1)%MOD-1%MOD)%MOD;
			set_max=(set_max%MOD+(set[n-i-1]%MOD*pow_2%MOD)%MOD)%MOD;
			set_min=(set_min%MOD+(set[i]%MOD*pow_2%MOD)%MOD)%MOD;
		}

		set_diff=(set_max%MOD-set_min%MOD)%MOD;

		if(set_diff >=0)
		{
			printf("%lld\n",set_diff);	
		}
		else
		{
			set_diff=set_diff+MOD;
			printf("%lld\n",set_diff);
		}
		
		
	}
	return 0;
}