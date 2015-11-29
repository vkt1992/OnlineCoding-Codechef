#include <stdio.h>
#include <math.h>

int main()
{
	int t;
	long long int n,res,i;
	
	scanf("%d",&t);
	
	while(t--)
	{
		scanf("%lld",&n);
		
		res=0;
		
		for(i=1;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				if(i==n/i)
				{
					res=res+i;
				}
				else
				{
					res=res+i+(n/i);	
				}
			}
		}
		
		printf("%lld\n",res);
	}
	
	return 0;
}
