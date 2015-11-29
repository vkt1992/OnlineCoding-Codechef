#include<iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

long long int PowerSet(long long int arr[],long long int n,long long int c)
{
    long long  int pow_set_size = pow(2,n);
    long long int res=0,flag=0;
    long long int counter, j;
 
    for(counter = 0; counter < pow_set_size; counter++)
    {
    	long long int sum=0
      for(j = 0; j < n; j++)
       {
          if(counter & (1<<j))
           {
           	sum=sum+arr[i];
           }
       }

       if(sum <= c)
       {
       		if(flag==0)
       		{
       			res=c-sum;
       			flag=1;
       		}
       		else
       		{
       			if(res > c-sum)
       			{
       				res=c-sum;
       			}
       		}
       }
    }

    return res;
}

int main()
{
	int t;
	scanf("%lld",&t);

	while(t--)
	{
		long long int n,c,arr[22];
		scanf("%lld%lld",&n,&c);

		for(i=0;i<n;i++)
		{
			scanf("%lld",&arr[i]);
		}

		long long int res=PowerSet(arr,n,c);

		printf("%lld\n",res);
	}

	return 0;
}