#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		double a,b,c,radius;
		double part1,part2,part3,part4,part;
		scanf("%lf%lf%lf",&a,&b,&c);
		part1=(a+b+c);
		part2=(c-a+b);
		part3=(a-b+c);
		part4=(a+b-c);
		part=part1*part2*part3*part4;
		radius=(a*b*c)/sqrt(part);
		printf("%.2lf\n",radius);
	}
	return 0;
}