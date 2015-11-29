#include <stdio.h>
int main()
{
	long long int n,m,a,b,c,i;
	scanf("%lld%lld",&n,&m);
	while(m--)
	{
		scanf("%lld%lld%lld",&a,&b,&c);
	}
	
	for(i=1;i<=n/2;i++)
	{
		printf("%lld ",i);
	}
	
	return 0;
}
