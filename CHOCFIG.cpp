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
		int n,arr[100001],i;

		scanf("%d",&n);

		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}

		if(n==1)	printf("1 0\n");
		else
		{
			int cnt1=0,cnt2=0,pos1=0,pos2=n-1,time1=0,time2=0;

			time1=arr[0];
			time2=arr[n-1];
			cnt1++;
			cnt2++;
			pos1++;
			pos2--;

			while(pos1<=pos2)
			{
				if(time1==time2 && pos2==pos1)
				{
					cnt1++;
				}
				else if(time1 < time2)
				{
					cnt1++;
					time1=time1+arr[pos1];
					pos1++;
				}
				else if(time1 > time2)
				{
					cnt2++;
					time2=time2+arr[pos2];
					pos2--;
				}
				else if(time2==time1 && pos2!=pos1)
				{
					cnt2++;
					time2=time2+arr[pos2];
					pos2--;	
					cnt1++;
					time1=time1+arr[pos1];
					pos1++;
				}


			}

			printf("%d %d\n",cnt1,cnt2);
		}
	}
	return 0;
}