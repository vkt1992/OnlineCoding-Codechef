#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		float o,r,s,res;
		scanf("%f%f%f",&o,&r,&s);
		res=((o*r) + s)/(o+1);
		printf("%.2f\n",res);
	}
	return 0;
}