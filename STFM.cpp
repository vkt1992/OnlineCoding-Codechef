/*
********************************************************
VIVEK KUMAR THAKUR
ARMY INSTITUTE OF TECHNOLOGY
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
#include <map>
#include <stdlib.h>
using namespace std;
#define input(i)	scanf("%d",&i);

int  main()
{
	long long int n,mod,outer_sum=0;
	scanf("%lld%lld",&n,&mod);

	while(n--)
	{
		long long int i,value,inner_sum,some_part;
		scanf("%lld",&value);

		inner_sum=(value*value);
		//printf("first : %lld\n",inner_sum);


		for(i=value-1;i>=2;i--)
		{
			inner_sum = (i*((i + inner_sum)));
		}

		inner_sum =  (inner_sum + 1 );

		if(value==1)
		{
			inner_sum=inner_sum-1;
		}

		some_part=value*(((value*(value+1)))/2);
		inner_sum=(inner_sum+some_part);
		outer_sum=( outer_sum +inner_sum); 

		//printf("inner: %lld\n",inner_sum);
	}

	printf("%lld\n",outer_sum%mod);
	return 0;
}