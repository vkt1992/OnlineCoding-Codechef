#include <stdio.h>
#include <string.h>

int palindrome(char str[],int frst,int last)
{
	while(frst < last)
	{
		if(str[frst]!=str[last])
		{
			return 0;
		}
		else
		{
			frst++;
			last--;
		}
	}
	return 1;
}


int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char str[1001];
		int len,i;
		scanf("%s",str);

		len=strlen(str);
		int flag1=1,flag2=1;
		for(i=0;i<=len/2;i++)
		{
			if(str[i]!=str[len-1-i])
			{
				str[len-1-i]=str[i];
				flag1=palindrome(str,i,len-1-i);
				break;
			}
		}

		if(flag1==0)
		{
			printf("no\n");
		}
		else
		{
			printf("yes\n");
		}
	}
	return 0;
}