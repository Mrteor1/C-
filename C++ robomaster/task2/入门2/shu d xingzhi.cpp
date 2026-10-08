#include <iostream>
using namespace std;
int main(){
	int num;
	cin >> num;
	if (num % 2 == 0 && num > 4 && num <= 12){
		cout << "1" <<" ";
	}
	else {
		cout <<"0"<< " ";
	}
		
	if (num % 2 == 0 || (num > 4 && num <= 12)){
		
		cout <<"1" <<" ";
	}
	else {
		cout <<"0" <<" ";
		
	
	}
	
	if( ( (num % 2 == 0) || (num > 4 && num <= 12) ) && ! ( (num % 2 == 0) && (num > 4 && num <= 12) ) ){
		
		cout <<"1" << " ";
	}
	else {
		cout <<"0" <<" ";
		
	
	}
		
		
	if (num % 2 != 0 && num <= 4 || num > 12){
	
		cout << "1" << " "<< endl;
	}
	else {
		cout <<"0" << " "<< endl;
		
	}
	cin.get();
	return 0;
}




