#include <iostream>
#include <stdio.h>
#include <vector>
#include <string.h>
#include <utility>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char str[100004];
		int cnt[27];
		
		for(int i=0;i<27;i++)	cnt[i]=0;
		scanf("%s",str);
			
		for(int i=0;i<strlen(str);i++)
		{
			int pos=str[i]-96;
			cnt[pos]++;
		}

		vector<pair<int,int> >vct;

		for(int i=1;i<27;i++)
		{
			vct.push_back(make_pair(cnt[i],i));
			//printf("%d : %d\n",cnt[i],i);
		}

		sort(vct.begin(),vct.begin()+26);

		if(strlen(str) > 1)
		{	
			int pos=0;
			int fuck_position=25,fucking_position=24;

			while(fucking_position >= 0 && fucking_position >=0)
			{
				//printf("hello %d: %d\n",fuck_position,fucking_position);
				while(vct[fuck_position].first!=0 && vct[fucking_position].first!=0)
				{
					str[pos++]=vct[fuck_position].second+96;
					str[pos++]=vct[fucking_position].second+96;

					vct[fuck_position].first=vct[fuck_position].first-1;
					vct[fucking_position].first=vct[fucking_position].first-1;

					if(vct[fuck_position].first > 0)
					{
						str[pos++]=vct[fuck_position].second+96;
						vct[fuck_position].first=vct[fuck_position].first-1;
					}

				}

				if(vct[fucking_position].first==0 && vct[fuck_position].first==0)
				{
					//printf("h1 %d : %d\n",vct[fuck_position].first,vct[fucking_position].first);
					fuck_position=fucking_position-1;
					fucking_position=fuck_position-1;
					
				}
				else if(vct[fuck_position].first==0 && vct[fucking_position].first!=0)
				{
					//printf("h2 %d : %d\n",vct[fuck_position].first,vct[fucking_position].first);
					fuck_position=fucking_position-1;
					
				}
				else if(vct[fuck_position].first!=0 && vct[fucking_position].first==0)
				{
					//printf("h3 %d : %d\n",vct[fuck_position].first,vct[fucking_position].first);
					fucking_position=fucking_position-1;
				}
			}	

			if(fuck_position < 0 && fucking_position < 0)
			{
				printf("%s \n",str);
			}
			else
			{
				printf("-1\n");
			}
		}
		else
		{
			if(vct[25].first==1)
			{
				printf("%c\n",vct[25].second+96);
			}
			else
			{
				printf("-1\n");
			}
		}
	}
	return 0;
}