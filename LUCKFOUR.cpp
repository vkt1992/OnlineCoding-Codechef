#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,temp,res,cnt;
		scanf("%d",&n);
		temp=n;
		cnt=0;
		while(temp > 0)
		{
			res=temp%10;
			temp=temp/10;
			if(res==4)	cnt++;
		}

		printf("%d\n",cnt);
	}

	return 0;
}