#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int n,m;
	cin >> n >> m;
	int arr[30000];
	for (int i = 0;i < n;i++)
	{
		cin >> arr[i];
	}
	int sum1 = 100000000,sum2=10000000;
	for (int j = 0;j<=n-m;j++)
	{
		
			sum1=0;
			for (int q =0;q<m;q++){
				sum1=sum1+arr[q+j];
			}
	
		if (sum1<sum2){
			sum2=sum1;
		}
	}	
	cout << sum2<<endl;
	
	
	cin.get();
	return 0;
}

