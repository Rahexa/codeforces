#include <bits/stdc++.h>
using namespace std;
  #define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define INF 100000000
#define ll long long int
   int main(){
    Faster;
    int t;     cin>>t;
    while(t--){
     string s;   cin>>s;
      ll sum=0;
     int c2=0,c3=0;
     for(int i=0;i<s.size();i++){
      sum+=(s[i]-'0');
      c2+=(s[i]=='2');
      c3+=(s[i]=='3');
     }
      if(sum%9LL==0){
      cout<<"YES"<<endl;
      continue;
     }
     bool ok=false;
     for(ll i=0;i<=min(100,c2);i++){
      for(ll j=0;j<=min(100,c3);j++){
       if((sum+(2LL*i)+(6LL*j))%9LL==0){
        ok=true;
        break;
       }
      }
      if(ok)break;
     }
      if(ok){
      cout<<"YES"<<endl;
     }
     else{
      cout<<"NO"<<endl;
     }
    }
    return 0;
}