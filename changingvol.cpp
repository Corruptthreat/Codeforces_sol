#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a ,b;
    int T;
    cin>>T;
    while(T--){
      cin>>a>>b;
      if(a==b){
          cout<<0<<endl;
      }
      else{
          long long int d = a-b;
          d = d<0?-d:d;
          long long int x = d/5;
          long long int y = d%5;
          x+=y/2;
          x+=y%2;
          cout<<x<<endl;
      }
    }
}