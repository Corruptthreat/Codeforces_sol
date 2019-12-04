#include<bits/stdc++.h>
#include <cmath> 
using namespace std;
int main(){
    int N;
    cin>>N;
    float arr[N];
    for(int i = 1 ; i<=N ;i++){
        cin>>arr[i];
    }
    for(int i = 1 ; i<=N ; i++){
        if(int(arr[i])%2==0){
           cout<<arr[i]/2<<endl;
        }
        else{
            if(arr[i]<0&&i%2==1){
        cout<<round(arr[i]/2)+1<<endl;
            }
        else {
            if(arr[i]<0){
            cout<<round(arr[i]/2)<<endl;
            }
            else{
                cout<<round(arr[i]/2)-1<<endl;
            }
        }
    
    }
}
}