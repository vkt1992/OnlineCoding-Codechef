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

long long int fact[10000001],sum[10000001],m;

void calculate()
{
	fact[0]=1;
	sum[0]=0;
	for(int i=1;i<=m;i++)
	{
		long long int tmp;
		tmp=i%m;
		fact[i]=(tmp*fact[i-1])%m;
		sum[i]= (sum[i-1] + (fact[i]*tmp)%m)%m;
	}
}


int  main()
{
	long long int n;
	long long int pi,total_sum=0;
	scanf("%lld%lld",&n,&m);
	calculate();	
	while(n--)
	{
		
		scanf("%lld",&pi);

		if(pi > m)
		{
			long long int part=1,temp;
			
			if(pi%2==0)
			{
				temp=pi/2;
				temp=temp%m;
				long long int tmp;
				tmp=pi%m;
				part=(tmp*(tmp+1))%m;
				part=(part*temp)%m;
			}
			else
			{
				temp=(pi+1)/2;
				temp=temp%m;
				long long int tmp;
				tmp=pi%m;
				part=(tmp*tmp)%m;
				part=(part*temp)%m;
			}

			total_sum=(total_sum + part + sum[m-1] )%m;
			
		}
		else
		{
			long long int part=1,temp;
			
			if(pi%2==0)
			{
				temp=pi/2;
				temp=temp%m;
				long long int tmp;
				tmp=pi%m;
				part=(tmp*(tmp+1))%m;
				part=(part*temp)%m;
			}
			else
			{
				temp=(pi+1)/2;
				temp=temp%m;
				long long int tmp;
				tmp=pi%m;
				part=(tmp*tmp)%m;
				part=(part*temp)%m;
			}

			total_sum=(total_sum + part + sum[pi])%m;
			
		}
	}

	printf("%lld\n",total_sum);

	return 0;
}