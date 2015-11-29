#include <stdio.h>
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int a,b,total;
		scanf("%lld%lld",&a,&b);
		total=(a*b) - a - b;
		printf("%lld\n",total);
	}
	return 0;
}