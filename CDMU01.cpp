/*
Wrong Answer
*/

#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <utility>
#include <string.h>
using namespace std;

 vector<pair<int,string> >vct;  

int main()
{
	int i;
	string str[]={"Dhaval","Shivang","Bhardwaj","Rishab",
					"Maji","Gaurav","Dhruv","Nikhil","Rohan","Ketan"};
	
	for(i=0;i<10;i++)
	{
		int tmp;
		scanf("%d",&tmp);
		vct.push_back(make_pair(tmp,str[i]));
	}	

	sort(vct.begin(),vct.begin()+10);

	int frnt=0,last=9;

	while(frnt < last)
	{
		cout<<vct[last].second<<endl;
		cout<<vct[frnt].second<<endl;
		last--;
		frnt++;
	}

	return 0;
}