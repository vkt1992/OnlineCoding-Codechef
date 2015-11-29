#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;
int main()
{	
	int n,arr[100000],sum,i;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)	scanf("%d",&arr[i]);
	
	scanf("%d",&sum);
	
	sort(arr,arr+n);
	
	int flag=0,pos1=0,pos2=n-1;
	
	while(pos1 < pos2)	
	{
		int total;
		total=arr[pos1]+arr[pos2];
		//printf("total: %d\n",total);
		
		if(total==sum)	
		{
			flag=1;
			break;
		}
		else if(total < sum)	pos1++;
		
		else pos2--;
	}

	if(flag==0)	printf("NO\n");
	else printf("YES\n");

	return 0;
}
