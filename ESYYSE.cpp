#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		if(n%2==0)	printf("%lld\n",n);
		else
		{
			printf("%lld\n",n-1);	
		}
	}
	return 0;
}