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
	int n,arr[100001],i;

	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	sort(arr,arr+n);

	int pos;

	if(n%2==0)
	{
		pos=(n/2)-1;
		printf("%d\n",arr[pos]);
	}
	else
	{
		pos=n/2;
		printf("%d\n",arr[pos]);
	}

	return 0;
}