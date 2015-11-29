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
#include <string.h>
#include <queue>
#include <vector>
#include <stack>
#include <map>
#include <stdlib.h>
using namespace std;
#define input(i)	scanf("%d",&i);

int min(int a,int b)
{
	if(a < b)	return a;
	else	
		return b;
}
int  main()
{
	int t;
	scanf("%d",&t);

	while(t--)
	{
		char str[100001];
		int len,flag1=0,flag2=1,count1=0,count2=0,i,count;

		scanf("%s",str);

		for(i=0;i<strlen(str);i++)
		{
			if(str[i]=='-')
			{
				if(flag1==0)
				{
					flag1=1;
				}
				else{

					count1++;
					flag1=0;
				}

				if(flag2==0)
				{
					flag2=1;
				}
				else{

					count2++;
					flag2=0;
				}

			}
			else
			{if(flag1==1)
				{
					flag1=0;
				}
				else{

					count1++;
					flag1=1;
				}

				if(flag2==1)
				{
					flag2=0;
				}
				else{

					count2++;
					flag2=1;
				}
			}
		}

		count=min(count1,count2);
		printf("%d\n",count);
	}

	return 0;
}