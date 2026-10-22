#include <bits/stdc++.h>
using namespace std;

int main(){
	long long x=0,n=0,sum=0,s=0;
	while(cin >>x)
	{
		sum+=x;
		n++;
	} 
	int h=2;
	for (int j=2 ;j <=n-1;j++)
	{
		h = 2*h;
	}
	s = sum * h;
	cout << s << endl;
	
	
	
	
	cin.get();
	return 0;
}































