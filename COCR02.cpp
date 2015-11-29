/*
TLE
http://www.codechef.com/COCR2015/problems/COCR02
*/


#include <iostream>
#include <string.h>
#include <stdio.h>
#include <vector>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char str[1000001];
		int len,i;
		vector <int> node[27];
		long long int count=0;
		scanf("%s",str);
		len=strlen(str);
		count=count+len;

		for(i=0;i<len;i++)
		{
			int pos=str[i]-96;
			if(node[pos].size()==0)
			{
				node[pos].push_back(i+1);
			}
			else
			{
				int v;
				for(v=0;v<node[pos].size();v++)
				{
					int value;
					value=node[pos][v];
					if(((i+1)-value)%2==0)	
					{
						count++;
					}
				}
				node[pos].push_back(i+1);
			}
		}
		printf("%lld\n",count);	
	}

	return 0;
}