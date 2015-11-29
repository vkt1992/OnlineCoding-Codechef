#include<stdio.h>
#include <iostream>
#include <stdlib.h>
# define maxx -999999999
# define minn 999999999
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);

	while(t--)
	{
		long long int num,i,arr[1001],j;
		long long int max_till=maxx,min_till=minn,till_diff=0;

		scanf("%lld",&num);

		for(i=0;i<num;i++)
		{
			scanf("%lld",&arr[i]);
		}

		long long int frst=0,done_diff=0,flag=0,done=0,min_max=0;
		for(i=0;i<num;i++)
		{
			if(frst==0)
			{
				min_till=arr[i];
				frst=1;
			}
			else
			{
				//cout<<"outer. "<<min_till<<" : "<<arr[i]<<endl;

				if(flag==0 && min_till > arr[i])
				{
					if(done==0)
					{
						min_max=arr[i]-min_till;
						//cout<<"1. "<<min_till<<" : "<<arr[i]<<endl;
						done=1;
					}
					else if(min_max < arr[i]-min_till)
					{
						min_max=arr[i]-min_till;
						//cout<<"2. "<<min_till<<" : "<<arr[i]<<endl;
					}
				}


				if(min_till > arr[i])
				{
					min_till=arr[i];
				}
				else
				{
					max_till=arr[i];
					flag=1;
					if(done_diff==0)
					{
						till_diff=max_till - min_till;
						//cout<<"1: "<<till_diff<<endl;
						done_diff=1;
					}

					else if(till_diff < max_till-min_till)
					{
						till_diff=max_till - min_till;
						//cout<<"2: "<<till_diff<<endl;
					}
					
				}



			}

			
		}
	
		if(flag==1)
		{
			printf("%lld\n",till_diff);
		}
		else
		{
			printf("%lld\n",min_max);
		}

		
	}

	return 0;

}