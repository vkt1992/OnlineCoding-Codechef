#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,cnt_t=0,cnt_s=0;
		char str[101];
		scanf("%s",str);
		scanf("%d",&n);

		for(int i=0;i<strlen(str);i++)
		{
			if(str[i]=='T')	cnt_t++;
			else cnt_s++;
		}
		
		long long int sum=cnt_t*2 + cnt_s,tot_sum,res=0;
		tot_sum=n*12;
		int cnt=1;

		while(cnt*sum <=tot_sum)
		{
			res=res+(tot_sum-cnt*sum);
			cnt++;
		}
		
		printf("%lld\n",res);
	}	
	return 0;
}
