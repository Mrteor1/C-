#include <bits/stdc++.h>
using namespace std;
int main (){
	
	int n,a=0,b=1,c=0;
	cin >> n;
	
	for (int i=1;i<=n;i++)
	{
		c+=b;
		a++;
		if (b==a){
			b++;
			a=0;
		}
		
	}
	cout <<c;
	
	cin.get();
	return 0;
}
