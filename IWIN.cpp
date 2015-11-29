#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
using namespace std;

int NumberOfSetBits(int i)
{
     i = i - ((i >> 1) & 0x55555555);
     i = (i & 0x33333333) + ((i >> 2) & 0x33333333);
     return (((i + (i >> 4)) & 0x0F0F0F0F) * 0x01010101) >> 24;
}

int main()
{
	int t;
	string mystr;
	scanf("%d",&t);
	
	while(t--)
	{
		int arr[18],x,i,res=0;

		for(i=0;i<15;i++)
		{
			scanf("%d",&arr[i]);	
			res=res^arr[i];
		}

		//printf("%lld\n",res);
		scanf("%d",&x);

		int bit;
		bit=NumberOfSetBits(res);

		//printf("%d\n",bit);
		if(bit > x)	printf("YES\n");
		else printf("NO\n");		
	}
	return 0;
}