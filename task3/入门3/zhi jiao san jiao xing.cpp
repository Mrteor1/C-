#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin >> n;
	int a=1;
	int i;
	
	for (i = n;i > 0;i--)
	{
		int j;
		for (j=1;j<=i;j++)
		{
			if(a<10)
			{
				cout << "0" << a;
			}
			else{
				cout << a;
			}
		
			a++;
		}
		cout << endl;
	}
	cin.get();
	return 0;
} 
