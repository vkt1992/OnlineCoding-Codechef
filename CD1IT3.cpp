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

int function(long long int arr[],long long int n,long long int sum)
{
	int l,r;
	l=0;
	r=n-1;

	while(l <r)
	{
		if(arr[l] + arr[r] ==sum)	return 1;
		else if(arr[l]+ arr[r] < sum)	l++;
		else
			r--;
	}

	return 0;
}

int  main()
{
	long long int n,k,arr[1001],i;
	
	scanf("%lld%lld",&n,&k);

	for(i=0;i<n;i++)
	{
		scanf("%lld",&arr[i]);
	}

	sort(arr,arr+n);

	int flag=function(arr,n,k);

	if(flag==1)	printf("Yes\n");
	else printf("No\n");
	return 0;
}