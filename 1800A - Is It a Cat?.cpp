#include <bits/stdc++.h>
using namespace std;
  const int N  = (int) 1e6+5;
  #define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
     int main(){
    Faster;
    int t;                  cin>>t;
    while(t--){
        int n;              cin>>n;
        string s;           cin>>s;
        string T="meow";
        for(int i=0;i<n;i++){
            if(s[i]<=90)s[i]+=32;
        }
        string ss="";
         for(int i=0;i<n;i++){
            if(ss.empty() or ss.back()!=s[i]){
                ss.push_back(s[i]);
            }
        }
         if(ss==T){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}