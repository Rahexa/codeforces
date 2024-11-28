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
            if(v[i] > max_value){
                max_value = v[i];
            }
    }
     cout<<max_value<<endl;
}
  }