#include<bits/stdc++.h>
using namespace std;
int zhong[11],ans[11];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=7;i++)cin>>zhong[i];
    for(int i=1;i<=n;i++){
        int d=0;
        for(int j=1;j<=7;j++){
            int x;
            cin>>x;
            for(int k=1;k<=7;k++){
                if(x==zhong[k]){
                    d++;
                    break;
                }
            }
        }
        ans[d]++;
    }
    for(int i=7;i>=1;i--)cout<<ans[i]<<' ';
}

