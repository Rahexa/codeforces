#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>v(n);
     for(int  i = 0;i<n;i++){
        cin>>v[i];
    }
    int max_value = v[0];
     for(int  i = 0;i<n;i = i+2){
                        max_value = max(max_value, v[i]);
    }
     cout<<max_value<<endl;
}
  }