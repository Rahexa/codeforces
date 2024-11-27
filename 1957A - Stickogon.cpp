#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>v(n);
    map<int,int>mp;
    for(int i = 0;i<n;i++){
          cin>>v[i];
        mp[v[i]]++;
    }
     int ans = 0;
    for(auto ii : mp){
         ans = ans +ii.second/3;
    }
    cout<<ans<<endl;
   }
       }