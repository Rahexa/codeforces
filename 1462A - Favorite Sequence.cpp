#include <bits/stdc++.h>
using namespace std;
int main (){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i = 0;i<n;i++) {
        cin>>v[i];
      }
    vector<int>result;
    int i = 0;
    int j = n-1;
     while(i<j){
          result.push_back(v[i]);
        result.push_back(v[j]);
        i++;
        j--;
     }
      if(n%2 != 0){
        int m = (n/2);
        result.push_back(v[m]);
      }
  for(int i = 0;i<n;i++){
      cout<<result[i]<<endl;
}
   }
    }