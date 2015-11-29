#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		long long int res=0,i;
		scanf("%d",&n);

		if(n%2==0)
		{
			printf("0\n");
		}
		else
		{

			for(i=1;i<=n;i=i+2)
			{
				res=res^i;
			}
			printf("%lld\n",res);
		}
	}
}