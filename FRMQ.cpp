#include <iostream>
#include <stdio.h>
#include <math.h>
#include <limits.h>
using namespace std;

int arr[100001];

int maxval(int x,int y)
{
	return (x > y) ? x: y;
}

int max(int x,int y)
{
	return (x > y) ? x: y;
}

int min(int x,int y)
{
	return (x < y) ? x: y;
}

int middy(int start,int end)
{
	return start + (end-start)/2 ;
}

int range(int *seg, int segstart, int segend, int qeryst, int qeryend, int ind)
{
    if (qeryst <= segstart && qeryend >= segend)
        return seg[ind];

    if (segend < qeryst || segstart > qeryend)
        return -1;

    int mid = middy(segstart, segend);
    return maxval(range(seg, segstart, mid, qeryst, qeryend, 2*ind+1),
                  range(seg, mid+1, segend, qeryst, qeryend, 2*ind+2));
}

int DONE(int *seg, int n, int qeryst, int qeryend)
{
    if (qeryst < 0 || qeryend > n-1 || qeryst > qeryend)
    {
        printf("Invalid Input");
        return -1;
    }
 
    return range(seg, 0, n-1, qeryst, qeryend, 0);
}

int construction(int arr[], int segstart, int segend, int *seg, int si)
{
    if (segstart == segend)
    {
        seg[si] = arr[segstart];
        return arr[segstart];
    }
 
    int mid = middy(segstart,segend);
    seg[si] =  maxval(construction(arr, segstart, mid, seg, si*2+1),
                     construction(arr, mid+1,segend, seg, si*2+2));
    return seg[si];
}

int *develop(int arr[], int n)
{
    
    int x = (int)(ceil(log2(n))); 
    int max_size = 2*(int)pow(2, x) - 1; 
    int *seg = new int[max_size];
 
    
    construction(arr, 0, n-1, seg, 0);

    return seg;
}

int main()
{
	int n,i,m,x,y,qs,qe;
	long long int sum=0;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	scanf("%d%d%d",&m,&x,&y);
	
	int *seg = develop(arr,n);	
	
	while(m--)
	{
	
		qs=min(x,y);
		qe=max(x,y);
		
		//printf("qs: %d qe: %d\n",qs,qe);
		//printf("sum: %d\n",DONE(st,n,qs,qe));
		sum=sum+DONE(seg,n,qs,qe);
	
		x=(x+7)%(n-1);
		y=(y+11)%n;
	}

	printf("%lld",sum);

	return 0;
}
