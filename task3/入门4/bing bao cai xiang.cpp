#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int arr[10000000],n,t=1;
	cin >> n;
	arr[0]=n;
	while (n !=1) 
	{
		if(n%2 == 1)
		{
			n= n*3 + 1;
		}
		else
		{
			n = n/2;
		}
		arr[t]=n;
		t++;
		
	}
	t--;
	for (int i = t;i >=0 ;i--) 
	{ 
		cout << arr[i] << " ";
	}
	
	cin.get();
	return 0; 
} 
