#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i;
		int arr[27];

		for(i=0;i<=26;i++)
		{
			arr[i]=0;
		}

		char str[12354];
		scanf("%d",&n);
		scanf("%s",str);

		for(i=0;i<n;i++)
		{
			int pos;
			pos=str[i]-96;
			arr[pos]++;
		}

		for(i=1;i<=26;i++)
		{
			if(arr[i]%2!=0)
			{
				printf("%c\n",i+96);
			}
		}
	}

	return 0;
}