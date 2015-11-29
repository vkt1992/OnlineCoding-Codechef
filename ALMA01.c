#include <stdio.h>
#define MOD 1000000007
long long int fact(long long int n,long long int limit)
{
	long long int i,res=1;

	for(i=n;i>limit;i--)
	{
		res=(i*res)%MOD;
	}

	return res%MOD;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long n,k;
		long long int res1,final,part22,part21,part1,part23;
		scanf("%lld%lld",&n,&k);

		part1=fact(k,1);
		
		part21=fact(n,1);
		part22=fact(k,1);
		part23=fact(n-k,1);

		final=(part21/(part22*part23))%MOD;
		
		final=(final*part1)%MOD;
		printf("%lld\n",final);
	}
	return 0;
}