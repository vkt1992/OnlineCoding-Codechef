#include<stdio.h>
typedef unsigned long long ull;
int get(ull a)
{
	int ans=0;
	while(a>0)
	{
		ans=ans+a%10;
		if(ans>=10)
		{
			ans=ans%10+1;
		}
		a=a/10;
	}
	return ans;
}
int main()
{
	ull a,b;
	int t,n1,n2,ans,temp;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%llu%llu",&a,&b);
		n1=get(a);
		n2=get(b);
		printf("gere %d %d",n1,n2);
		temp=n1*n2;
		ans=get(temp);
		printf("hj:%d\n",ans);
	}
} 