#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int s,c,k,result;
		scanf("%lld%lld%lld",&s,&c,&k);
		if (c==0)
		{
			if(k>s)
				{printf("0\n");}
			else
				{
				result=pow(2,s-k+1)+1;
				printf("%lld\n",result);
				}
		}
			
	else if(k==1)
	{
		if(s==c)
			{
				result=pow(2,c)+pow(2,s)+1;
			}
		else if(s>c)
			{
				result=pow(2,s)+1;
			}
		else
			{result=pow(2,s)+1;
			if(s==0)
			{  
				result=0;
				s=1;
			}
			for (int i =s; i< c+1; i++)
			{
				result+=pow(2,i);
			}
			}	
		printf("%lld\n",result); 
	}
		
	else
	{
		if(s>=k)
			{if(c<s-k+1)
				{
					result=pow(2,s-k+1)+1;
				}
			else
				{
					result=2*pow(2,s-k+1)+1;
				}
			printf("%lld\n",result); 
		}
		else
			printf("0\n");
	}
		
	}
	return 0;
}