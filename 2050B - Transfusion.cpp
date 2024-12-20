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
      long long sum  = 0;
for(int i  = 0;i<n;i++){
         sum+=v[i];
 }
 int d = sum/n;
if(sum % n != 0){
    cout<<"NO"<<endl;
}
else{
        int reven = 0;
         int neven = 0;
    for(int i = 0;i<n;i+=2){
        reven += v[i];
        neven++;
     }
    int rodd = 0;
         int nodd = 0;
    for(int i = 1;i<n;i+=2){
        rodd += v[i];
        nodd++;
     }
  if(reven == (neven*d) && rodd == (nodd*d)){
    cout<<"YES"<<endl;
 }
 else{
    cout<<"NO"<<endl;
}
}
  }
 }