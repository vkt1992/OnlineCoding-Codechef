#include <iostream>
using namespace std;
int main()
{
	int t,sum=0,n,a,i,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		sum=0;
		for(i=0;i<n;i++)
		{
			cin>>a;
			sum=sum+a;
		}

		if(sum%2==0)
		{
			if(k==1)	cout<<"odd";
			else
				cout<<"even";
		}
		else
		{
			cout<<"even";
		}
		cout<<"\n";
	}
	return 0;
} 