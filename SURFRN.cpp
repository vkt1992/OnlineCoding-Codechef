#include<iostream>
#define maxx 999999999;
using namespace std;

int cost[101][101]={0},adjmatrix[101][101],n,stnode,i,j,destination;

void calculatecost()
{
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(adjmatrix[i][j]!=0)
			{
				cost[i][j]=adjmatrix[i][j];
			}
			else
			{
				cost[i][j]=maxx;
			}

		}
	}
}

void calculatedijsktra(int st)
{
	int visited[101]={0},distance[101],path[101];

	for(i=0;i<=n;i++)
	{
		distance[i]=cost[st][i];
		visited[i]=0;
		path[i]=st;
	}

	visited[st]=1;
	distance[st]=0;

	int count=1;
	int nxtnode;

	while(count <= n-1)
	{
		int mindisity=maxx;

		for(i=0;i<=n;i++)
		{
			if(distance[i] < mindisity && visited[i]==0)
			{
				mindisity=distance[i];
				nxtnode=i;
			} 
		}
		visited[nxtnode]=1;

		for(i=0;i<=n;i++)
		{
			if(visited[i]==0)
			{
				if(mindisity+cost[nxtnode][i] < distance[i])
				{
					distance[i]=mindisity+cost[nxtnode][i];
					path[i]=nxtnode;
				}
			}
		}
		count++;
	}

	cout<<distance[destination];

}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{

	cin>>n>>stnode>>destination;

	//cout<<"\n enter the distance between i and j node: ";

	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
			adjmatrix[i][j]=0;
		}
	}

	int temp=1;
	while(temp < n)
	{
		cin>>i>>j;
		adjmatrix[i][j]=1;
		adjmatrix[j][i]=1;
		temp++;
	}

	calculatecost();
	calculatedijsktra(stnode);
	cout<<"\n";
	
	}
	
	return 0;
}