#include <bits/stdc++.h>
using namespace std;
 int main() {
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        vector<int>v;
        for(int i = 1;i<x;i++){
           int g =  __gcd(i,x);
           v.push_back(g+i);
          }
    int max = v[0];
    int index = 0;
for(int i = 1;i<v.size();i++){
if(v[i]>v[i+1]) max = v[i];
index = i ;
 }
 cout<<index+1<<endl;
    }
  }