#include <bits/stdc++.h>
using namespace std;
int main (){
	int putin;
	cin >> putin;
	int a;
	cin >> a;
	
	for (int i = 2;i <= putin ; i++)
	{
		int j;
		cin >> j;
		if( j < a){
			a = j;
		}
		
	}
	cout << a << endl;
	
	
	
	
	cin.get();
	return 0;
} 
