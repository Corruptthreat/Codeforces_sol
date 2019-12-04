#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n ,m;
        cin>>n>>m;
        int a[n];
        for(int i = 1;i<=n;i++){
            cin>>a[i];
        }
        int c = 0;
        for(int i=1;i<=m;i++){
            c += a[i]+a[i+1];
            if(i==n){i=0;}
          
        }
        cout<<c;
    }
}