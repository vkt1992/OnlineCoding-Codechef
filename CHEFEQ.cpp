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
		int temp,n,i,pos[100001],count=-1;
		scanf("%d",&n);

		for(i=0;i<100001;i++)	pos[i]=0;

		for(i=0;i<n;i++)
		{
			scanf("%d",&temp);
			pos[temp]++;

			if(count < pos[temp])
			{
				count=pos[temp];
			}
		}

		printf("%d\n",n-count);
	}
	return 0;
 }