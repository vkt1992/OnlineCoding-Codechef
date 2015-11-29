#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	long long int pos[201],a1[101],b1[101],m,n,j,i;
	scanf("%lld%lld",&m,&n);

	for(i=0;i<=200;i++)	pos[i]=0;

	for(i=0;i<m;i++)
	{
		scanf("%lld",&a1[i]);
	}

	for(i=0;i<n;i++)
	{
		scanf("%lld",&b1[i]);
	}

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			int post=i+j;
			pos[post]=pos[post] + a1[i]*b1[j];
		}
	}

	printf("%lld",pos[0]);

	for(i=1;i<=m+n-2;i++)
	{
		printf(" + %lldx^%lld",pos[i],i);
	}

	printf("\n");
	return 0;
}