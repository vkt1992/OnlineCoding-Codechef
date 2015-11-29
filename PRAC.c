#include <stdio.h>
#include <math.h>
int main()
{
	int t;
	scanf("%d",&t);
	{
		float a,b,c,radius;
		float part1,part2,part3,part4,part;
		scanf("%f%f%f",&a,&b,&c);
		part1=(a+b+c);
		part2=(c-a+b);
		part3=(a-b+c);
		part4=(a+b-c);
		part=part1*part2*part3*part4;
		radius=(a*b*c)/sqrt(part);
		printf("%.2f\n",radius);
	}
	return 0;
}