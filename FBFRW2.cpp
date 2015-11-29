#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,arr[50001];
		scanf("%d",&n);
		for(int i=0;i<n;i++)	scanf("%d",&arr[i]);
		sort(arr,arr+n);
		int sec=0,count=0,i=0,check,flag=-1;
		while(1)
		{
			check=arr[i]-sec;
			if(i==n)
			{
				break;
			}
			if(check<=0)
			{
				flag=i;
				break;
			}	
			sec++;
			count++;
			if(count==6)
			{
				sec=sec+1;
				count=0;
			}

			i++;
		}
		if(flag==-1)	printf("Bhai Ho!\n");
		else
			{
				printf("Killed %d\n",flag);
			}
	}
	return 0;
}