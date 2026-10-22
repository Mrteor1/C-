#include <bits/stdc++.h>
using namespace std;

float num1, num2, num3, num4;
	      // num1 =x1 num2=x2 num3=y1 num4=y2
	float add (float num1,float num2,float num3,float num4){
		float sum=((num2 - num1)*(num2 - num1)+(num4 - num3)*(num4 - num3));
		float sum0= sqrt(sum);
		return sum0;
	}
	
int main(){
	
	float x1,y1,x2,y2,x3,y3,sum1,sum2,sum3,sum4;
	cin >> x1>>y1;
	cin >> x2>>y2;
	cin >> x3>>y3;
	sum1 = add(x1,x2,y1,y2);
	sum2 = add(x1,x3,y1,y3); 
	sum3 = add(x2,x3,y2,y3);
	sum4 = sum1 +sum2+sum3;
	cout <<fixed<< setprecision(2)<< sum4<<endl; 
	
	cin.get();
	return 0;
} 
