#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    vector<int>v(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
     int max1 = 0;
    for(int i = 0;i<n;i++){
        max1 = max(max1,i+v[i]);
    }
   cout<<max1<<endl;
}
   }