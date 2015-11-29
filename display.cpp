#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int arr[10]={6,2,5,5,4,5,6,3,7,6};
int main()
{
	char str[1000];
	cin>>str;
	int len,cnt=0;
	len=strlen(str);

	for(int i=0;i<len;i++)
	{
		int temp;
		temp=str[i]-48;
		cnt=cnt+arr[temp];
	}
	printf("%d\n",cnt);
	return 0;
}
