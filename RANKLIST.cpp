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

int  main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,s,sum,pointer,temp;
		scanf("%lld%lld",&n,&s);
		
		sum=n;

		for(pointer=1;;pointer++)
		{
			temp=pointer+sum;
			if(temp <= s)
			{
				sum=temp;
			}
			else
			{
				break;
			}
		}

		printf("%lld\n",n-pointer);
	}
	return 0;
}