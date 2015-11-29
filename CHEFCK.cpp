#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <limits.h>
#include <math.h>
#define mod 1000000007
using namespace std;

long long int arr[10000004];

long long int maxval(long long int x,long long int y)
{
	return (x > y) ? x: y;
}

long long int max(long long int x,long long int y)
{
	return (x > y) ? x: y;
}

long long int min(long long int x,long long int y)
{
	return (x < y) ? x: y;
}

long long int middy(long long int start,long long int end)
{
	return start + (end-start)/2 ;
}

long long int range(long long int *seg, long long int segstart, long long int segend, long long int qeryst, long long int qeryend, long long int ind)
{
    if (qeryst <= segstart && qeryend >= segend)
        return seg[ind];

    if (segend < qeryst || segstart > qeryend)
        return INT_MAX;

    long long int mid = middy(segstart, segend);
    return min(range(seg, segstart, mid, qeryst, qeryend, 2*ind+1),
                  range(seg, mid+1, segend, qeryst, qeryend, 2*ind+2));
}

long long int DONE(long long int *seg, long long int n, long long int qeryst, long long int qeryend)
{
    if (qeryst < 0 || qeryend > n-1 || qeryst > qeryend)
    {
        printf("Invalid Input");
        return -1;
    }
 
    return range(seg, 0, n-1, qeryst, qeryend, 0);
}

int construction(int arr[], long long int segstart, long long int segend, long long int *seg, long long int si)
{
    if (segstart == segend)
    {
        seg[si] = arr[segstart];
        return arr[segstart];
    }
 
    int mid = middy(segstart,segend);
    seg[si] =  min(construction(arr, segstart, mid, seg, si*2+1),
                     construction(arr, mid+1,segend, seg, si*2+2));
    return seg[si];
}

int *develop(int arr[], long long int n)
{
    
    int x = (int)(ceil(log2(n))); 
    int max_size = 2*(int)pow(2, x) - 1; 
    int *seg = new int[max_size];
 
    
    construction(arr, 0, n-1, seg, 0);

    return seg;
}

int main()
{
	long long int n,k,q;
	long long int a,b,c,d,e,f,r,s,t,m;
	long long int L1,La,Lc,Lm,D1,Da,Dc,Dm;
	scanf("%d%d%d",&n,&k,&q);
	scanf("%d%d%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&r,&s,&t,&m,&arr[0]);
	scanf("%d%d%d%d%d%d%d%d",&L1,&La,&Lc,&Lm,&D1,&Da,&Dc,&Dm);
	
	for(long long int x=1;x<n;x++)
	{
		long long int hv=pow(t,x);	
		if(hv%s <= r)
		{
			long long int tmp=(((a%m*pow(arr[x-1],2)%m)%m)%m+((b%m*arr[x-1]%m)%m)%m+c%m)%m;
			arr[x]=tmp;
		}
		else
		{
			long long int tmp=(((d%m*pow(arr[x-1],2)%m)%m)%m+((e%m*arr[x-1]%m)%m)%m+f%m)%m;
			arr[x]=tmp;
		}
	}

	long long int *seg = develop(arr,n);

	long long int soq=0,poq=1,temp;
	long long int R,L;

	/*
	printf("array: \n")

	for(long long int x=0;x<n;x++)
	{
		printf("%d  ",arr[x]);
	}
	*/
	for(long long int i=1;i<=q;i++)
	{
		L1=((La%Lm*L1%Lm)%Lm+Lc%Lm)%Lm;
		D1=((Da%Dm*D1%Dm)%Dm+Dc%Dm)%Dm; 
		L=L1+1;
		R=min(L+k-1+D1,n);
		//printf("\n l:  %d,r: %d  \n",L-1,R-1);
		temp=DONE(seg,n,L-1,R-1);
		//printf("\n value: %d\n",temp);
		soq=(soq%mod+temp%mod)%mod;
		poq=(poq%mod*temp%mod)%mod;

	}

	printf("%d %d\n",soq,poq);

	return 0;
}