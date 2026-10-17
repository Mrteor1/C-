#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int arr[110];
	int len = 0;
	while (cin >> arr[len])
	{
		if(arr[len]==0)break;
		len++;
	}
	
	
	int start = 0;
	int end =len - 1;
	
	while(start < end)
	{
		int change=arr[start];
		arr[start]=arr[end];
		arr[end]=change;
		start++;
		end--;
	}
	for(int i=0;i<len;i++)
	{
		cout << arr[i] <<" ";
	}
	cin.get();
	return 0; 
} 
