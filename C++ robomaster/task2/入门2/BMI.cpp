#include <bits/stdc++.h>
using namespace std;
int main(){
	double m , h;
	cin >> m >> h;
	if (m / (h * h)< 18.5){
		cout << "Underweight" << endl;
	}
	else if (m / (h * h)>= 18.5 && m / (h * h) <24){
		cout <<  "Normal" << endl;
	}
	else {
		cout << fixed << setprecision(4) << (m /(h * h)) << "\n" << "Overweight" << endl;
	}
	cin.get();
	return 0;
}
