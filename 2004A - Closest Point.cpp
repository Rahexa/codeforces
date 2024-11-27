#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i = 0;i<n;i++){
         cin>>v[i];
    }
     if(n==2){
        int diff = v[1]-v[0];
         if(diff>= 2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
     }
    else{cout<<"NO"<<endl;}
}
     }