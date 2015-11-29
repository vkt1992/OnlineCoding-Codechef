#include <iostream>
#include <stdio.h>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	map<string,int>mp;
	int n;
	string str;
	
	scanf("%d",&n);
	while(n--)
	{
		cin>>str;
		
		if(mp[str])
		{
			mp[str]++;
		}
		else
		{
			mp[str]=1;
		}
	}

	for (std::map<string,int>::iterator it=mp.begin(); it!=mp.end(); ++it)
    	{
		cout<<it->first<<" "<<it->second<<'\n';	
	}

	return 0;
}
