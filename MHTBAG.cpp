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
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int w1,w2,n1,n2,ans=0,req;
		scanf("%lld%lld%lld%lld",&w1,&w2,&n1,&n2);

		if(w1!=0)
		{
				req=w1/2;
				if(n2>=req)
				{
					ans=ans+req*2;
					w1=w1-req*2;
					n2=n2-req;
				}
				else
				{
					ans=ans+n2*2;
					w1=w1-n2*2;
					n2=0;
				}
		}

		if(w1!=0)
		{
				req=w1;
				if(n1>=req)
				{
					ans=ans+req;
					w1=w1-req;
					n1=n1-req;
				}
				else
				{
					ans=ans+n1;
					w1=w1-n1;
					n1=0;
				}
		}


		if(w2!=0)
		{
				req=w2/2;
				if(n2>=req)
				{
					ans=ans+req*2;
					w2=w2-req*2;
					n2=n2-req;
				}
				else
				{
					ans=ans+n2*2;
					w2=w2-n2*2;
					n2=0;
				}
		}

		if(w2!=0)
		{
				req=w2;
				if(n1>=req)
				{
					ans=ans+req;
					n1=n1-req;
					w2=w2-req;
				}
				else
				{
					ans=ans+n1;
					w1=w1-n1;
					n1=0;
				}
		}
	
		printf("%lld\n",ans);
	}
	return 0;
}