#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int arr[27],i,len;
		char str[61];
		scanf("%s",str);

		for(i=0;i<=26;i++)
		{
			arr[i]=0;
		}
		
		len=strlen(str);

		for(i=0;i<len;i++)
		{
			int cnt;
			cnt=str[i]-96;
			arr[cnt]++;
		}

		int flag=0;

		for(i=1;i<=26;i++)
		{
			if(arr[i]==len-arr[i])
			{
				flag=1;
				break;
			}
		}

		if(flag==1)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}	

	return 0;
}