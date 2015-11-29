#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <map>
#include <string.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);

	while(t--)
	{	
		char str[102],pos1,pos2;
		int i,flag=0;

		scanf("%s",str);

		pos1=str[0];
		pos2=str[1];

		if(strlen(str)%2!=0)
		{
			printf("NO\n");
		}

		else if(strlen(str)==2)
		{
			printf("YES\n");
		}
		else
		{

			for(i=0;i<strlen(str);i++)
		{
			if(i%2==0)
			{
				if(str[i]!=pos1)
				{
					flag=1;
					break;
				}
			}
			else if(i%2!=0)
			{
				if(str[i]!=pos2)
				{
					flag=1;
					break;
				}
			}
		}

		if(flag==0)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}

		}

		
	}

	return 0;
}