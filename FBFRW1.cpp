#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n,m,i;
	scanf("%d%d",&n,&m);
	int arr[n+1];
	for(i=0;i<n;i++)	scanf("%d",&arr[i]);
	int pos=n-m;
	sort(arr,arr+n);
	printf("%d\n",arr[pos]);
	return 0;
}