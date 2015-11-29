#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int i,num;
		char mystr[101];
		char str[1001][101];

		
		scanf("%d",&num);
		
		for(i=0;i<num;i++)
		{
			
			scanf("%s",str[i]);
		}

		scanf("%s",mystr);

		int check=0;


		int l=0,r=num-1;

		while(l <= r)
		{
			int mid=(l+r)/2;
	
			if(strcmp(str[mid],mystr)==0)	
			{
				check=1;
				break;
			}
	
			else if(strcmp(str[mid],mystr) > 0) 
				{
					r=mid-1;
				}
	
			else 
				{
					l=mid+1;
				}
		}

		if(check==1)	printf("yes\n");
		else printf("no\n");

	}

     return 0;
}