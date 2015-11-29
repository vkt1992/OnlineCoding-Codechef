#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int a,b,cnt=0,tmp2,tmp1;
		scanf("%d%d",&a,&b);

		while(a!=0 || b!=0)
		{
			tmp1=a&1;
			tmp2=b&1;

			if(tmp2!=tmp1)
			{
				cnt++;
			}

			a=a>>1;
			b=b>>1;
		}

		printf("%d\n",cnt);
	}

	return 0;
}