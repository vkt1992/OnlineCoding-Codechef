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
		char str[10001];
		scanf("%s",str);
		int acost,bcost;
		scanf("%d%d",&acost,&bcost);
		int len=strlen(str),frnt,rear,flag=0,result=0;
		frnt=0;
		rear=len-1;
		while(frnt < rear)
		{
			if(str[frnt]!='/' &&  str[rear]!='/' && str[frnt]!=str[rear])
			{
				flag=1;
				break;
			}
			else if(str[frnt]=='/' && str[rear]=='/')
			{
				if(acost < bcost)
				{
					result=result+2*acost;
				}
				else
				{
					result=result+2*bcost;
				}
			}
			else if(str[frnt]!='/' && str[rear]=='/')
			{
				if(str[frnt]=='a')
				{
					result=result+acost;
				}
				else
				{
					result=result+bcost;
				}	
			}
			else if(str[rear]!='/' && str[frnt]=='/')
			{
				if(str[rear]=='a')
				{
					result=result+acost;
				}
				else
				{
					result=result+bcost;
				}
			}
			frnt++;
			rear--;
		}

		if(flag==0)
		{
			printf("%d\n",result);
		}
		else
		{
			printf("-1\n");
		}
	}
	return 0;
}