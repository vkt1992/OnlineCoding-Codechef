#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	int t;
	string mystr;
	scanf("%d",&t);
	std::getline (std::cin,mystr);
	while(t--)
	{
		string str;
		int len,arr[27],i;

		std::getline (std::cin,str);

		for(i=0;i<=26;i++)	arr[i]=0;

		len=str.size();
		
		for(i=0;i<len;i++)
		{
			if( (97<=str[i] && str[i] <=122) || (65<=str[i] && str[i] <=90) )
			{
				int k=str[i];
				if((97<=str[i] && str[i] <=122))
				{
					arr[k-96]++;
				}
				else
				{
					arr[k-64]++;
				}
			}
		}

		int cnt=-1,pos=0;
		for(i=1;i<=26;i++)
		{
			//cout<<i<<" : "<<arr[i]<<" : ";
			if(arr[i]!=0)
			{
				if(cnt <= arr[i])
				{
					pos=i;
					cnt=arr[i];
				}
			}

			//cout<<cnt<<endl;
		}

		printf("%c\n",pos+96);

	}
	return 0;
}