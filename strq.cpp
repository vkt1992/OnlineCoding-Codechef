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
#include <string.h>
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
	char str[1000001];
	scanf("%s",str);
	int q;
	scanf("%d",&q);

	while(q--)
	{
		int ptr1,ptr2;
		char ch2,ch1;
		int i,flag=0;
		long long int res=0;

		cin>>ch1>>ch2>>ptr1>>ptr2;
		
		ptr1--;
		ptr2--;

		while(flag!=1)
		{
			if(str[ptr1]==ch1)
			{
				flag=1;
				break;
			}
			else
			{
				ptr1++;
			}
		}

		for(i=ptr1+1;i<=ptr2;i++)
		{
			if(str[i]==ch1)	flag++;

			else if(str[i]==ch2)
			{
				res=res+flag;
			}
		}

	printf("%lld\n",res);
	}

	return 0;
}