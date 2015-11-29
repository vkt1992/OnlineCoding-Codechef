/*
wrong answer
*/
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
		char str[51];
		int n,i,j,min;

		scanf("%d",&n);
		scanf("%s",str);

		int idx1,flag=0,idx2,loop,pos;
		for(i=0;i<n;i++)
		{
			min=str[i]-64;
			int pos2;
			idx1=i;
			loop=0;
			pos=i;
			for(j=i+1;j<n;j++)
			{
				pos2=str[j]-64; 
				if(pos2 <= min)
				{
					if(pos2==min)
					{
						if(pos!=i)
						{
							min=pos2;
							idx2=j;
							loop=1;
							pos=j;
						}
					}
					else
					{
						min=pos2;
						idx2=j;
						loop=1;
						pos=j;
					}
					
				}
			}

			if(loop!=0)
			{
				flag=1;
				break;
				
			}
		}
		
		if(flag==1)
		{
			for(i=0;i<idx1;i++)
			{
				printf("%c",str[i]);
			}

			printf("%c",str[idx2]);

			for(i=idx1;i<n;i++)
			{
				if(i!=idx2)
				{
					printf("%c",str[i]);	
				}
			}

			printf("\n");


		}
		else
		{
			printf("%s\n",str);
		}
	}

	return 0;
}