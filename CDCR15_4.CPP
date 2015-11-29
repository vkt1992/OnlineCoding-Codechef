/*
********************************************************
VIVEK KUMAR THAKUR
ARMY INSTITUTE OF TECHNOLOGY
verdict: logic error
*********************************************************
*/

//ehw9ffggiJecvRR5tsEm4WNU4DsGfF

https://btsqualifierswc.azurewebsites.net/kdhdkjfhdf/

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
		int arr[101];
		int n,d,i;
		scanf("%d%d",&n,&d);

		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}

		int max,min,count=0;
		max=arr[0];
		min=arr[0];
		
		for(i=0;i<=n-3;i++)
		{
			if(arr[i+1] < min)
			{
				min=arr[i+1];
			}

			if(arr[i+2] < min)
			{
				min=arr[i+2];
			}
			if(arr[i+1] > max)
			{
				max=arr[i+1];
			}
			if(arr[i+2] < max)
			{
				max=arr[i+2];
			}

			if(max-min >= d)
			{
				count++;
				break;
			}

			count++;


		}

	}
	return 0;
}