#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int max(int a,int b)
{
	if(a > b)
		return a;
	else
		return b;
}

int max_sum(int arr[],int n)
{
	int ms=arr[0];
	int cm=arr[0];

	for(int i=1;i<n;i++)
	{
		cm=max(arr[i],cm+arr[i]);
		ms=max(ms,cm);
	}

	return ms;
}


int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char str[1000001];
		int arr[1000001],len,cnt=0;
		scanf("%s",str);

		len=strlen(str);

		for(int i=0;i<len;i++)
		{
			if(str[i]=='R')
			{
				arr[i]=-1;
				cnt=cnt+1;
			}
			else
			{
				arr[i]=1;
			}
		}
		long long int ans;
		ans=max_sum(arr,len);
		printf("%lld\n",ans+cnt);
	}

	return 0;
}