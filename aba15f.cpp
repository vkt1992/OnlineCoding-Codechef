#include <stdio.h>
#include <math.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,res,sum=0,flag;
		scanf("%lld",&n);	
		flag=0;
		while(n!=0)
		{
			res=n & 1;
			n=n>>1;
			
			if(flag%2==0)
			{
			 sum=sum+pow(2,flag)*res;
			}
			
			flag++;
		}
	
		printf("%lld\n",sum);				
	}
	
	return 0;
}
