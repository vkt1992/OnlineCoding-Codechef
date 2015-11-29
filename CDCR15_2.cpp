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
	int q;
	scanf("%d",&q);

	while(q--)
	{
		int x,y,z,f,rem;
		scanf("%d%d%d",&x,&y,&z);
		rem=(x*z-z*y);
		
		if(rem%y==0)
		{
			f=rem/y;
		}
		else
		{
			f=rem/y;
			f=f+1;
		}

		printf("%d\n",f);
	}
	return 0;
}