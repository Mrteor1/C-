#include<bits/stdc++.h>
using namespace std;

int run1(int num1,int num2){
    int j = 0;
    for(int i=num1;i<=num2;i++)
    {
        if( (i%4==0 && i%100!=0) || (i%400==0) )
        {
            j++;
        }
    }
    cout << j << endl;
    return j;
}

void run2(int num1,int num2){
    for(int i=num1;i<=num2;i++)
    {
        if( (i%4==0 && i%100!=0) || (i%400==0) )
        {
            cout << i << " ";
        }
    }
}

int main(){
    int a,b;
    cin >> a >> b;
    run1(a,b);
    run2(a,b);
    return 0;
}
