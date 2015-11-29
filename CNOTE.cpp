#include <stdio.h>
# define sf scanf
int main()
{
	int x,y,n,k,t,temp,flag=0,p,c;
	sf("%d",&t);
	while(t--)
	{
		sf("%d%d%d%d",&x,&y,&k,&n);
		flag=0;
		temp=x-y;
		while(n--)
		{
			sf("%d%d",&p,&c);
			if(temp<=p && k >=c)
			{
				flag=1;
			}
		}

		if(flag==1)	printf("LuckyChef\n");
		else printf("UnluckyChef\n");
	}
	return 0;
}