#include <iostream>
#include <stdio.h>
#include <math.h>
#include <vector>
#define mod 1000003
#define LL long long
using namespace std;

LL f[1000005] = {1,1};
 

LL power(LL a, LL b)
{
	LL x=1,y=a; 
	while(b > 0)
	{
		if(b%2 == 1)
		{
			x=(x*y);
			if(x>mod) x%=mod;
		}
		y = (y*y);
		if(y>mod) y%=mod; 
		b /= 2;
	}
	return x;
}
 
 
 
long long InverseEuler(LL n)
{
	return power(n,mod-2);
}
 
long long C(LL n, LL r)
{
	LL ans = 1, n1, r1;
	
	while(n) {
		n1 = n % mod;
		r1 = r % mod;
 
		if(n1 < r1){
			ans = 0;
			break;
		}
 
		ans = ans * ((f[n1] * ((InverseEuler(f[r1]) * InverseEuler(f[n1-r1])) % mod)) % mod);
		ans %= mod;
		n/=mod;
		r/=mod;
	}
 
	return ans;
}
 
void PreCompute()
{	
	for (int i=2; i<=1000002;i++)
		f[i]= (f[i-1]*i) % mod;
}
    int  main()
    {
    	int t;
    	scanf("%d",&t);

	PreCompute();

    	while(t--)
    	{
    		long long int l,r,n;
    		long long int sum=0,diff;
    		
    		scanf("%lld%lld%lld",&n,&l,&r);
    		
    		diff=r-l+1;

		sum = C(n + diff, diff);
 
		if(sum == 0) 
			sum = mod - 1;
		else sum -= 1;
    				
    		printf("%lld\n",sum);
    	}
     
    	return 0;
    }
    			 


