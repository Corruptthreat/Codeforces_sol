#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
      long int a ,b;
      cin>>a>>b;
      int d = a-b;
      if(d%2==0){
          cout<<"NO"<<endl;
      }
      else{
          cout<<"YES"<<endl;
      }
    }
}
