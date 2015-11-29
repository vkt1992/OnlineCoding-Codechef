#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int arr[250001];
int main() 
{	
	int t;
	
	scanf("%d",&t);
	while(t--)
	{
		int n,i;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);

			while(arr[i] >= 10)
			{
				int temp=0;
				while(arr[i]!=0)
				{
					temp=temp+arr[i]%10;
					arr[i]=arr[i]/10;
				}
				arr[i]=temp;
			}
		}

		sort(arr,arr+n);
		if(arr[n-1]==0)
		{
			printf("red\n");
			//string str[10]={'red','blue','pink','white','black','violet','cyan','yellow','green','brown'};
		}
		else if(arr[n-1]==1)
		{
			printf("blue\n");
		}
		else if(arr[n-1]==2)
		{
			printf("pink\n");
		}
		else if(arr[n-1]==3)
		{
			printf("white\n");
		}
		else if(arr[n-1]==4)
		{
			printf("black\n");
		}
		else if(arr[n-1]==5)
		{
			printf("violet\n");
		}
		else if(arr[n-1]==6)
		{
			printf("cyan\n");
		}
		else if(arr[n-1]==7)
		{
			printf("yellow\n");
		}
		else if(arr[n-1]==8)
		{
			printf("green\n");
		}
		else if(arr[n-1]==9)
		{
			printf("brown\n");	
		}
		
	}

	return 0;
}