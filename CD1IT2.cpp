#include <iostream>
#include <stdio.h>
#include <math.h>
#include <utility>
#include <algorithm>
#include <set>
#include <queue>
#include <vector>
#include <stack>
#include <map>
#include <stdlib.h>
using namespace std;
#define input(i)	scanf("%d",&i);

int  main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int x;
		scanf("%lld",&x);
		long long int k=x*M_LOG10E + 1;
		printf("%lld\n",k);
	}
	
	return 0;
}