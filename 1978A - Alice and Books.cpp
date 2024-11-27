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
int max_val = v[0];
for(int i = 1;i<n-1;i++){
 if(v[i]>max_val){
    max_val = v[i];
  }
 }
  cout<<max_val+v[n-1]<<endl;
}
   }