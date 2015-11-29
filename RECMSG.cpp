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
			int arr[27],len,i;
			char str[1001];
			scanf("%s",str);

			for(i=0;i<=26;i++)
			{
				arr[i]=0;
			}

			len=strlen(str);
			for(i=0;i<=len;i++)
			{
				int pos;
				pos=str[i]-96;
				arr[pos]++;
			}

			long long int res=0;

			for(i=0;i<=26;i++)
			{
				res=res+ i*arr[i];
			}

			printf("%lld\n",res);
		}

		return 0;
}