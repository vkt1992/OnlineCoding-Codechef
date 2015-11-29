#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int m,k,n;
		
		scanf("%d%d%d",&m,&k,&n);
		vector <int> vct[m+1];
		int arr[n+1],i;
		
		while(k--)
		{
			int x,y;
			scanf("%d%d",&x,&y);
			vct[x].push_back(y);
			vct[y].push_back(x);
			
			for(int v=0;v<vct[y].size();v++)
			{
				int pos=vct[y][v];
				vct[x].push_back(pos);
				vct[pos].push_back(x);
			}
		}

		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		
		int flag=0,cnt=0;

		for(i=1;i<=m;i++)
		{
			sort(vct[i].begin(),vct[i].end());
		}
		
		
		for(i=0;i<n;i++)
		{
			if(i==0)
			{	
				int ele=arr[0],pos,minny=arr[0];
				for(int v=0;v<vct[ele].size();v++)
				{
					pos=vct[ele][v];
					
					if(minny > pos)
					{
						minny=pos;	
					}
				}

				if(arr[0]!=minny)
				{
					arr[0]=minny;
					cnt++;
				}	
			}
			else
			{
				if(arr[i] < arr[i-1])
				{
					int ele=arr[i],pos,minny=arr[i-1];
					for(int v=0;v<vct[ele].size();v++)
					{
						pos=vct[ele][v];
						
						if(minny < pos)
						{
							minny=pos;	
							break;
						}
					}

					if(minny!=arr[i-1])
					{
						arr[i]=minny;
						cnt++;
					}	
					else
					{
						flag=1;
						break;
					}
				}
			}
		}

		if(flag==1) printf("-1\n");
		else
		{
			printf("%d\n",cnt);	
		}
		
	}

	return 0;
}

