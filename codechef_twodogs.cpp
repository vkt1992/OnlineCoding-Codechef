#include<iostream>
#include<algorithm>
#include<math.h>
#include<string.h>
using namespace std;

int myindex[8000000],t[8000000],n;

int main()
{
	int k,i,pos,new_ans,ans=1000000,x,y;

	cin>>n>>k;

	memset(myindex,1000000,8000000);
	

	for(i=0;i<n;i++)
	{
		cin>>t[i];
		x=t[i];

        y=min(i+1,n-i);
        myindex[x]=min(myindex[x],y);

	}
	
	int b;
    if(k%2==0) b=k/2-1;
    else b=k/2;
    for(int i=1;i<=b;i++)
    {
        int a=max(myindex[i],myindex[k-i]);
        ans=min(ans,a);
    }	
 
	if(ans!=1000000)	cout<<ans<<endl;
	else cout<<"-1"<<endl;
	
	return 0;

}