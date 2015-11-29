/*
********************************************************
VIVEK KUMAR THAKUR
ARMY INSTITUTE OF TECHNOLOGY
TLE
*********************************************************
*/

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <utility>
#include <algorithm>
#include <set>
#include <queue>
#include <vector>
#include <stack>
#include <string.h>
#include <map>
#include <stdlib.h>
using namespace std;
#define input(i)	scanf("%d",&i);

int  main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int i,n,k,sum,given;
		
		scanf("%lld%lld",&n,&k);
		
		sum=(n*(n+1))/2;
		
		given=sum-k;
		long long int product=999999999;

		for(i=1;i<given;i++)
		{
			long long int temp;
			temp=given-i;
			if(temp <= n)
			{
				long long int check;
				check=i*temp;
				if(check <= product)
				{
					product=check;
				}
			}
		}
		
		printf("%lld\n",product);

	}

	return 0;
}