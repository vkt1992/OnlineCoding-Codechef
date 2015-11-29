#include <iostream>
#include <stdio.h>
int arr[100001];
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int i,j;
		long long int cnt=0;

		for(i=0;i<n;i++)	scanf("%d",&arr[i]);

		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if((arr[i]^arr[j])%2!=0)
				{
					cnt++;
				}
			}
		}

		printf("%lld\n",cnt);
	}
	return 0;
}