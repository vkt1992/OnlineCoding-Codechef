#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stack>
#include <string.h>
using namespace std;
 
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		char str[50],opr;
		scanf("%s",str);
		stack<long long int>st1;
		stack<char>st2;
		long long int len,i,cnt=0,num=0,flag=0;
		len=strlen(str);
 
		for(i=len-1;i>=0;i--)
		{
			if(str[i]!='+' && str[i]!='-' && str[i]!='*')
			{
				num=(str[i]-48)*pow(10,cnt);
			}
			else
			{
				st1.push(num);
				num=0;
				if(!st2.empty())
				{
					long long int num1,num2;
					num1=st1.top();
					st1.pop();
					num2=st1.top();
					st1.pop();
 
					if(st2.top()=='+')
					{
						st1.push(num1+num2);
					}	
					else if(st2.top()=='*')
					{
						st1.push(num1*num2);
					}
					else
					{
						st1.push(num2-num1);
					}
 
					st2.pop();
					st2.push(str[i]);
				}
				else
				{
					st2.push(str[i]);	
				}
			}
		}
 
		long long int num1;
		num1=st1.top();
		st1.pop();
		long long int result;
		if(st2.top()=='+')
			{
				result=(num+num1);
			}	
		else if(st2.top()=='*')
			{
				result=(num*num1);
			}
		else
			{
				result=(num1-num);
			}
 
		st2.pop();
 
 
		while(!st2.empty())
		{
			st2.pop();
		}
 
		while(!st1.empty())
		{
			st1.pop();
		}
	printf("%lld\n",result);
	}
 
	return 0;
} 