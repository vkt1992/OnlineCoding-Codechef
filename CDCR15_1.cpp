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
#include <string.h>
#include <stdlib.h>
using namespace std;
#define input(i)	scanf("%d",&i);

int  main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char str[100001];
		int n,k,len,i,flag=0,done=0;
		
		scanf("%d%d",&n,&k);
		scanf("%s",str);
		len=strlen(str);

		for(i=0;i<len;i++)
		{
			if(str[i]=='#')
			{
				flag++;
				if(flag >= k)
				{
					done=1;
					break;
				}
			}
			else
			{
				flag=0;
			}
		}

		if(done==1)
		{
			printf("NO\n");
		}
		else
		{
			printf("YES\n");
		}
	}
	return 0;
}