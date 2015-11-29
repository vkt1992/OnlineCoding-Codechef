#include <iostream>
#include <stdio.h>
using namespace std;

long long int max(long long int a,long long int b)
{
	if(a > b)	return a;
	else	return b;
}

int main()
{
	long long int i,n,wi,j;
		
	scanf("%lld%lld",&wi,&n);
	
	long long int b[n],w[n],rray[n][wi];

	for(i=1;i<=n;i++)
	{
		scanf("%lld%lld",&w[i],&b[i]);
	}

	for(i=0;i<=n;i++)
	{
		for(j=0;j<=wi;j++)
		{
			if(i==0 || j==0)	
			{
					rray[i][j]=0;
			}
			else if(w[i] > j)
			{
				rray[i][j]=rray[i-1][j];
			}
			else
			{
				rray[i][j]=max(rray[i-1][j],b[i]+ rray[i-1][j-w[i]]);
			}
		}
	}

	printf("%lld\n",rray[n][wi]);
	return 0;
}