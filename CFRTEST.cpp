#include <iostream>
#include <set>
using namespace std;
int main()
{
	set <int>st;
	int t;
	cin>>t;
	while(t--)
	{
		int n,a;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			st.insert(a);
		}
		cout<<st.size()<<"\n";
		st.clear();
	}
	return 0;
}