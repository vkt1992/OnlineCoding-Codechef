#include<stdio.h>
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{	long long int arr[100000],n,i;
		scanf("%lld",&n);
		
		arr[0]=0;
		for(i=0;i<n;i++)	scanf("%lld",&arr[i]);
		
		long long int incl=arr[0],excl=0,excl_new;
		
		for(i=1;i<n;i++)
		{
			excl_new=((incl > excl) ? incl:excl);
			incl=excl+arr[i];
			excl=excl_new;	
		}

		long long int myres;
		
		myres=((incl > excl ) ? incl : excl );
		
		printf("%lld\n",myres);
		
	}
	
	return 0;
}
