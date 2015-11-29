#include <iostream>
#include <stdio.h>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

vector<pair<long long int,long long int> >vct;

long long int activityselection(long long int n)
{
	long long int count=1;
	long long int pos=0;
	for(long long int j=1;j<n;j++)
	{
		if(vct[j].second >= vct[pos].first)
		{
			pos=j;
			count++;
		}
	}
	return count;
}

int main()
{
long long int t;
scanf("%lld",&t);
while(t--)
{	long long int i,n;
	scanf("%lld",&n);
	long long int a[n+1],b[n+1];
	vct.clear();
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}

	for(i=0;i<n;i++)
	{
		scanf("%lld",&b[i]);
	}

	for(i=0;i<n;i++)
	{
		vct.push_back(make_pair(b[i],a[i]));
	}

	sort(vct.begin(),vct.begin()+n);

	long long int result=activityselection(n);
	printf("%lld\n",result);
}
	return 0;
}