#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	float a;
	int b;
	cin >> a;
	cin >> b;
	
	cout<<fixed<<setprecision(3) << a / b << "\n" << 2*b << endl; 
	
	cin.get();
	return 0;
} 
