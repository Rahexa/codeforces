#include <bits/stdc++.h>
using namespace std;
int main (){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char ,int>mp;
    for(int i = 0;i<s.size();i++){
         mp[s[i]]++;
    }
 int count = 0;
    for(auto ii : mp){
 if(ii.second>= (ii.first- 'A' +1)) {
        count++;}
  }
cout<<count<<endl;
 }
}