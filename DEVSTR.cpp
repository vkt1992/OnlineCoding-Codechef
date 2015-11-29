#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k;
	
		scanf("%d%d",&n,&k);
		
		char str[n+1];
		scanf("%s",str);
		str[n]='\0';
	
		if(k==1)
		{
			int cnt1=0,cnt2=0;

			for(int i=0;i<n;i++)
			{
				if(i%2==0)
				{
					if(str[i]!='1')
					{
						cnt1++;
					}
					else
					{
						cnt2++;
					}
				}
				else
				{
					if(str[i]!='0')
					{
						cnt1++;
					}
					else
					{
						cnt2++;
					}
				}
				
			}

			if(cnt1 < cnt2)
			{
				printf("%d\n",cnt1);
				for(int i=0;i<n;i++)
				{
					if(i%2==0)
					{
						printf("1");
					}
					else
					{
						printf("0");
					}
				}
			}
			else
			{
				printf("%d\n",cnt2);
				for(int i=0;i<n;i++)
				{
					if(i%2==0)
					{
						printf("0");
					}
					else
					{
						printf("1");
					}
				}
			}

			printf("\n");
			
		}
		else
		{
			char last=str[0];
			int cnt=1,res=0;

			for(int i=1;i<strlen(str);i++)
			{	
				if(str[i]==last)
				{
					cnt++;
				}
				else
				{
					cnt=1;
				}
 
				if(cnt > k)
				{
					
					if(((i+1) <= (n-1)) && str[i]==str[i+1])
					{
						cnt=1;
						res++;
 
						if(str[i]=='1')
						{
							str[i]='0';
						}
						else
						{
							str[i]='1';
						}	
					}
					else
					{
						cnt=1;
						res++;
 
						if(str[i-1]=='1')
						{
							str[i-1]='0';
						}
						else
						{
							str[i-1]='1';
						}		
					}
				}
				last=str[i];
			}

			printf("%d\n",res);
			printf("%s\n",str);
		}
	}
	return 0;
}