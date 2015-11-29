#include <stdio.h>
int main()
{
	long long int arr[101];
	int n,i;
	arr[0]=1;
	arr[1]=2;

	for (i = 2; i<=100; ++i)
	{
		arr[i]=arr[i-1]+arr[i-1];
	}

	scanf("%d",&n);
	printf("%lld\n",arr[n]);
	return 0;
}