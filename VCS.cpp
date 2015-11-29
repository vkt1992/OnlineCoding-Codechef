#include <iostream>
#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,arr1[101],i,m,k,arr2[101],dne;
		scanf("%lld%lld%lld",&n,&m,&k);

		
		for(i=1;i<=n;i++)
		{
			arr2[i]=1;
			arr1[i]=1;
		}


		for(i=1;i<=m;i++)
		{
			scanf("%lld",&dne);
			arr1[dne]=0;
			
		}

		for(i=1;i<=k;i++)
		{
			scanf("%lld",&dne);
			arr2[dne]=0;
			
		}

		int cnt1=0,cnt2=0;

		for(i=1;i<=n;i++)
		{
			if(arr1[i]==1 && arr2[i]==1)
			{
				cnt2++;
			}
			if(arr1[i]==0 && arr2[i]==0)
			{
				cnt1++;
			}
		}

		printf("%d %d\n",cnt1,cnt2);

		printf("\n");
	}
	return 0;
}