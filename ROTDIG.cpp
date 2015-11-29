/*
********************************************************
VIVEK KUMAR THAKUR
ARMY INSTITUTE OF TECHNOLOGY
*********************************************************
*/

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <utility>
#include <algorithm>
#include <set>
#include <queue>
#include <vector>
#include <stack>
#include <map>
#include <string.h>
#include <stdlib.h>
using namespace std;
#define input(i)	scanf("%d",&i);

long long int cal(int pos1,int pos2,char str[50])
{
	int cnt=0;
	long long int value=0;
	for(int i=pos2;i>=pos1;i--)
	{
		value=value+(str[i]-48)*pow(10,cnt);
		cnt++;
	}

	return value;
}

int  main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char str[50];
		int len,i;
		long long int temp,max_cur=-1,flag=0,check=0;
		scanf("%s",str);
		len=strlen(str);

		for(i=len;i<=2*len-1;i++)
		{
			str[i]=str[i-len];

			if(str[i-len]=='0') flag=1;
			else
				check=1;

		}

		if(check==0)	printf("0\n");

		else if(flag==0)
		{

			for(i=0;i<len;i++)
			{
				temp=cal(i,i+len-1,str);

				if(temp > max_cur)
				{
					max_cur=temp;
				}
			}

		printf("%lld\n",max_cur);
		
		}
		else
		{

			for(i=1;i<len;i++)
			{
				temp=cal(i,i+len-1,str);

				if(temp > max_cur)
				{
					max_cur=temp;
				}

				if(str[i]=='0') break;
			}

			for(i=len-1;i>=0;i--)
			{
				if(i==len-1 && str[i]=='0') break;

				temp=cal(i,i+len-1,str);

				if(temp > max_cur)
				{
					max_cur=temp;
				}

				if(str[i]=='0') break;
			}


			printf("%lld\n",max_cur);

		}
		
	}	
	return 0;
}