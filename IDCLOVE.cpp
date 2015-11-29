#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,mod,sum,temp,cnt,i;

		scanf("%lld%lld",&n,&mod);
		 
		temp=mod-1;
		sum=(temp*(temp+1))/2;
		cnt=n/mod;
		sum=sum*cnt;


		if(n%mod==0)
		{
			printf("%lld\n",sum);
		}
		else
		{
			temp=n%mod;
			cnt=(temp*(temp+1))/2;
			sum=sum+cnt;
			printf("%lld\n",sum);
		}
		
	}
	return 0;
}