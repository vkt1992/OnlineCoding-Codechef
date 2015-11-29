#include <iostream>
#include <math.h>
#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int len;
		char n[10];
		scanf("%s",n);

		if((n[0]-48)%2==0)
			{
				printf("EVEN\n");
			}
		else
			{
				printf("ODD\n");
			}
	}
	return 0;
}