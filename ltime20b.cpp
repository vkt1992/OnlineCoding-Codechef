#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stack>
#include<algorithm>
#include<math.h>
using namespace std;

long long int mod;
long long int fast_exp(long long int base,long long int exp) {
    long long int res=1;
    while(exp>0) {
       if(exp%2==1) 
       {
       		res=(res*base)%mod;
       }
       base=(base*base)%mod;
       exp/=2;
    }
    return res%mod;
}

int main()
{
	int t;
	scanf("%d",&t);

	while(t--)
	{
		char str[10001];
		scanf("%lld",&mod);
		scanf("%s",str);
		stack<long long int>st1;
		stack<long long int>st2;
		int flag=0,len;
		len=strlen(str);
		int start=1,i;

		for(i=0;i<len;i++)
		{
			if(i==0)
			{
				st1.push(str[i]-48);
				st2.push(str[i]-48);
				start=1;
			}
			else
			{
				if(str[i]=='*')
				{
					if(flag==0)	flag=1;
					else 
					{
						flag=2;
					}
				}
				else
				{
					if(flag==1)
					{
						if(start==1)
						{
							st2.pop();
							st1.push(str[i]-48);
							start=0;
							flag=0;
						}
						else
						{
							st1.push(str[i]-48);
							flag=0;
						}
					}
					else
					{
						if(start==1)
						{
							st1.pop();
							long long int power=fast_exp(st2.top(),str[i]-48);
							st1.push(power);
							st2.pop();
							flag=0;
						}
						else
						{
							long long int power=fast_exp(st2.top(),str[i]-48);
							st1.push(power);
							st2.pop();
							flag=0;
						}
					}
				}

			}	
		}

		long long int res=1;
		while(!st1.empty())
		{
			res=(res*st1.top())%mod;
			st1.pop();
		}

		printf("%lld\n",res);

	}

	return 0;
}