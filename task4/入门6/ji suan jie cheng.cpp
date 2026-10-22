#include <bits/stdc++.h>
using namespace std;
int cheng(int num1)
{
	if (num1==1)
	{
		return 1;
	}
	return num1 * cheng(num1-1);
}
int main()
{
	int n;
	cin >> n;
	cheng(n);
	cout << cheng(n) <<endl;
	cin.get();
	return 0;
}
