#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int a,b;
	char opr;
	scanf("%d%c%d",&a,&opr,&b);

	if(opr=='+')
	{
		printf("%d\n",a+b);
	}
	else if(opr=='*')
	{
		printf("%d\n",a*b);
	}
	else if(opr=='-')
	{
		printf("%d\n",a-b);
	}
	else if(opr=='/')
	{
		printf("%d\n",a/b);
	}
	else
	{
		printf("Invalid Operator\n");
	}
	return 0;
}