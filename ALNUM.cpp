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

vector<long long int >v;
const unsigned long long MAX=1e+18;

int length(long long int x)
{
	int res=1;
	while(x > 9)
	{
		res++;
		x/=10;
	}

	return res;
}

void calc()
{
	v.clear();
	for(int i=0;i<10;i++)
	{
		v.push_back(i);
	}

	for(int i=1;i<v.size();i++)
	{
		int len=length(v[i]);
		long long int next=v[i]*len;

		for(int nlen=len;nlen<=len+2;nlen++)
		{
			if(next > MAX) break;
			int l=length(next);
			if(l > 1 && length(next)==nlen)
			{
				v.push_back(next);
			}
			next+=v[i];
		}
	}
}

long long int sol(long long int l,long long int r)
{
	long long int res=0;

	for(int i=0;i<v.size();i++)
	{
		if(l<=v[i] && v[i]<=r)
		{
			res++;
		}
	}

	return res;
}


int  main()
{
	calc();
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int l,r;
		scanf("%lld%lld",&l,&r);
		printf("%lld\n",sol(l,r));
	}
	return 0;
}