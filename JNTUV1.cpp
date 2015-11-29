#include <stdio.h>
#include <iostream>
using namespace std;
void find(int n)
{
 
    string arr[n+1];
    arr[0] = ""; 
 
    
    int size = 1, m = 1;
 
   
    while (size <= n)
    {
        
        for (int i=0; i<m && (size+i)<=n; i++)
            arr[size + i] = "3" +  arr[size - m + i];
 
      
        for (int i=0; i<m && (size + m + i)<=n; i++)
            arr[size + m + i] = "4" +  arr[size - m + i];
 
       
        m = m<<1; 
        size = size + m;
    }
    cout << arr[n] << endl;
}

int main()
{
	int n;
	scanf("%d",&n);
	find(n);
	return 0;
}
