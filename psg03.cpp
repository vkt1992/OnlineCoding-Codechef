#include<iostream>
#include<math.h>
using namespace std;

long long int tree[100001]={0},arr[100001];

void create_bit_tree(long long int arr[],long long int tree[],long long int n)
{
	long long int r_pos,start_pos,i,j;

	for(i=1;i<=n;i++)
	{
		r_pos=log2(i & (-i));
		start_pos=i-pow(2,r_pos)+1;

		for(j=start_pos;j<=i;j++)
		{
			tree[i]=tree[i]+arr[j];
		}
	}
}

long long int read_bit_tree(long long int tree[],long long int n,long long int indx)
{
	long long int k,sum=0;
	while(indx >= 1)
	{
		sum=sum+tree[indx];
		indx=indx - (indx & (-indx));
	}

	return sum;
}

int main()
{
	long long int n,i;

	cin>>n;

	for(i=1;i<=n;i++)	cin>>arr[i];

	create_bit_tree(arr,tree,n);
	
	long long int q;
	cin>>q;

	while(q--)
	{
		long long int x,y;
		cin>>x>>y;
		long long int sum; 
		sum=read_bit_tree(tree,n,y)-read_bit_tree(tree,n,x-1);
		cout<<sum;
		cout<<endl;
	}

	
	
	return 0;	
}