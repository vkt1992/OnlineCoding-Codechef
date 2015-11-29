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
#include <string.h>
#include <map>
#include <stdlib.h>
using namespace std;
#define input(i)	scanf("%d",&i);

long long int mcount[10001]={0};

void cal()
{
	mcount[0]=0;
	mcount[1]=0;
	mcount[2]=0;
	mcount[3]=0;	
	long long int cnt=1,sum=2;
	for(int i=4;i<=10000;i=i+2)
	{	
		mcount[i]=cnt;
		mcount[i+1]=cnt;
		cnt=cnt+sum;
		sum++;
		
	}
}
int  main()
{
	int t;
	scanf("%d",&t);
	
	cal();
	
	while(t--)
	{
		int n;
		scanf("%d",&n);
		printf("%lld\n",mcount[n]);
	}
	return 0;
}
