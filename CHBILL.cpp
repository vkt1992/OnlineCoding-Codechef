#include <iostream>
#include <stdio.h>
using namespace std;

long long int a[400001],b[400001],i,n,value,position,d;

void cal()
{
	for(i=0;i<n;i++)
	{	
		long long int path;
		if(i==0)
		{	path=0;
			value=0;
			while(1)
			{
				path=a[i]+path;
				value=value+a[i];
				if(path > d)
				{
					path=path-a[i];
					value=value-a[i];
					value=value+d-path;
					break;
				}
				else
				{
					path=path-b[i];
					value=value+b[i];	
				}
			}
			position=0;
		}
		else
		{
			path=0;
			long long int value1=0;
			while(1)
			{
				path=a[i]+path;
				value1=value1+a[i];
				if(path > d)
				{
					path=path-a[i];
					value1=value1-a[i];
					value1=value1+d-path;
					break;
				}
				else
				{
					path=path-b[i];
					value1=value1+b[i];	
				}
			}

			if(value1 < value)
			{
				value=value1;
				position=i;
			}
		}

	}
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&n);

		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}


		for(i=0;i<n;i++)
		{
			scanf("%lld",&b[i]);
		}

		scanf("%lld",&d);
		
		 cal();
		
		printf("%lld\n",position+1);
	}

	return 0;
}