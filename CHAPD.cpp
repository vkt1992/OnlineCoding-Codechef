#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

long long int gcd(long long int a,long long int b)
{
    long long int t;

     while(b!=0)
        {
            t=b;
            b=a%b;
            a=t;
        }
    return a;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int x,y,res,h1,y1,h2,y2;
		scanf("%lld%lld",&x,&y);

        h1=gcd(x,y);
        y1=y/h1;
        h2=gcd(y1,h1);

        while(h2 > 1)
        {
            h2=gcd(y1,h1);
            y1=y1/h2;
            h1=h2;
        }

        if(h2==1 && y1 > 1)
		{
			printf("No\n");
		}
		else
		{
			printf("Yes\n");
		}

	}
	return 0;
}