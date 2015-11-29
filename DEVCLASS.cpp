#include <iostream>
#include <stdio.h>
#include <math.h>
#include <queue>
#include <algorithm>
#include <string.h>
using namespace std;

int mod(int a,int b)
{
	if(a-b >=0 )	return (a-b);
	else
		return (b-a);
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int type,len;
		char str[100001],str1[100001];
		queue<int>bq;
		queue<int>gq;
		queue<int>bq1;
		queue<int>gq1;
		scanf("%d",&type);
		scanf("%s",str);
		len=strlen(str);

		int flag=0,i,gcnt=0,bcnt=0;
		char last;
		last=str[0];

		if(str[0]=='B')
			{
				bq.push(0);
				bq1.push(0);
				bcnt++;
			}
			else
			{
				gq.push(0);
				gq1.push(0);
				gcnt++;
			}
		
		for(i=1;i<len;i++)
		{
			if(str[i]=='B')
			{
				bq.push(i);
				bq1.push(0);
				bcnt++;
			}
			else
			{
				gq.push(i);
				gq1.push(0);
				gcnt++;
			}

			if(last==str[i])
			{
				flag=1;
			}
			else
			{
				last=str[i];
			}

			
		}

		strcpy(str1,str);

		if(flag==0 && mod(gcnt,bcnt)<=1)
		{
			printf("0\n");
		}
		else if(mod(gcnt,bcnt) >=2 )
		{
			printf("-1\n");
		}
		else if(gcnt==bcnt)
		{
			int pondy=0; // 0 -> B
			long long int res1=0;

			for(i=0;i<len;i++)
			{
				if(pondy==0 && str[i]=='B')
				{
					pondy=1;
					//printf("a %d\n",i);
					bq.pop();
				}
				else if(pondy==0 && str[i]=='G')
				{
					int idx;
					idx=bq.front();
					char temp;
					temp=str[i];
					str[i]=str[idx];
					str[idx]=temp;
					//printf("b %d\n",i);
					bq.pop();
					gq.pop();
					gq.push(idx);
					pondy=1;
					res1=res1+pow(mod(i,idx),type);

				}
				else if(pondy==1 && str[i]=='G')
				{
					pondy=0;
					//printf("c %d\n",i);
					gq.pop();
				}
				else if(pondy==1 && str[i]=='B')
				{
					int idx;
					idx=gq.front();
					char temp;
					temp=str[i];
					//printf("d %d\n",i);
					str[i]=str[idx];
					str[idx]=temp;
					bq.pop();
					gq.pop();
					bq.push(idx);
					res1=res1+pow(mod(i,idx),type);
					pondy=0;
				}
			}
			//printf("res1: %lld\n",res1);

			pondy=1;// 1 -> G
			long long int res2=0;

			for(i=0;i<len;i++)
			{
				if(pondy==0 && str1[i]=='B')
				{
					pondy=1;
					//printf("e %d\n",i);
					bq1.pop();
				}
				else if(pondy==0 && str1[i]=='G')
				{
					int idx;
					//printf("f %d\n",i);
					idx=bq1.front();
					char temp;
					temp=str1[i];
					str1[i]=str1[idx];
					str1[idx]=temp;
					bq1.pop();
					gq1.pop();
					gq1.push(idx);
					pondy=1;
					res2=res2+pow(mod(i,idx),type);

				}
				else if(pondy==1 && str1[i]=='G')
				{
					pondy=0;
					//printf("g %d\n",i);
					gq1.pop();
				}
				else if(pondy==1 && str1[i]=='B')
				{
					int idx;
					//printf("h %d\n",i);
					idx=gq1.front();
					char temp;
					temp=str1[i];
					str1[i]=str1[idx];
					str1[idx]=temp;
					bq1.pop();
					gq1.pop();
					bq1.push(idx);
					res2=res2+pow(mod(i,idx),type);
					pondy=0;
				}
			}

			//printf("res2: %lld\n",res2);

			if(res1 < res2)
			{
				printf("%lld\n",res1);
			}
			else
			{
				printf("%lld\n",res2);
			}
		}
		else if(gcnt > bcnt)
		{	
			int pondy=1,value1=0; // 1 -> G
			long long int res1=0;

			for(i=0;i<len;i++)
			{
				if(pondy==0 && str[i]=='B')
				{
					pondy=1;
					bq.pop();
				}
				else if(pondy==0 && str[i]=='G')
				{
					int idx;
					idx=bq.front();
					char temp;
					temp=str[i];
					str[i]=str[idx];
					str[idx]=temp;
					bq.pop();
					gq.pop();
					gq.push(idx);
					pondy=1;
					res1=res1+pow(mod(i,idx),type);

				}
				else if(pondy==1 && str[i]=='G')
				{
					pondy=0;
					gq.pop();
				}
				else if(pondy==1 && str[i]=='B')
				{
					int idx;
					idx=gq.front();
					char temp;
					temp=str[i];
					str[i]=str[idx];
					str[idx]=temp;
					bq.pop();
					gq.pop();
					bq.push(idx);
					res1=res1+pow(mod(i,idx),type);
					pondy=0;
				}
			}

			printf("%lld\n",res1);

		}
		else if(bcnt > gcnt)
		{

			int pondy=0,value1=0; // 0 -> B
			long long int res1=0;

			for(i=0;i<len;i++)
			{
				if(pondy==0 && str[i]=='B')
				{
					pondy=1;
					bq.pop();
				}
				else if(pondy==0 && str[i]=='G')
				{
					int idx;
					idx=bq.front();
					char temp;
					temp=str[i];
					str[i]=str[idx];
					str[idx]=temp;
					bq.pop();
					gq.pop();
					gq.push(idx);
					pondy=1;
					res1=res1+pow(mod(i,idx),type);

				}
				else if(pondy==1 && str[i]=='G')
				{
					pondy=0;
					gq.pop();
				}
				else if(pondy==1 && str[i]=='B')
				{
					int idx;
					idx=gq.front();
					char temp;
					temp=str[i];
					str[i]=str[idx];
					str[idx]=temp;
					bq.pop();
					gq.pop();
					bq.push(idx);
					res1=res1+pow(mod(i,idx),type);
					pondy=0;
				}
			}
			printf("%lld\n",res1);
		}
	}
	return 0;
}