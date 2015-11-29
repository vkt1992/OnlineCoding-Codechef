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

int  main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int k,pos,i;
		char str[10001];
		scanf("%d",&k);

		scanf("%s",str);

		for(i=0;i<strlen(str);i++)
		{
			int done;
			done=str[i]-96;
			done=done+k;

			if(done <= 26)
			{
				printf("%c",done+96);
			}
			else
			{
				done=done-26;
				printf("%c",done+96);
			}
		}

		printf("\n");

	}
	return 0;
}