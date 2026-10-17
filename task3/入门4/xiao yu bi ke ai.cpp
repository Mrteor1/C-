#include <bits/stdc++.h>
using namespace std;
int main(){
	
	 int n;
    cin >> n;
    int arr[105];   

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    for(int i=0; i<n; i++)      
    {
        int ccc = 0;           
        for(int j=0; j<i; j++)  
        {
            if(arr[j] < arr[i])
                ccc++;
        }
        cout << ccc << " ";
    }

	cin.get();
	return 0;
}






 
