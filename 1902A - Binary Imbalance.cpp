#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
     int  n;
    cin>>n;
    string s;
    cin>>s;
         int one = 0;
        int zero = 0;
         for(int i = 0;i<n;i++){
          if(s[i] == '1')one++;
          else zero++;
        }
          bool count = false;
     for(int i = 0;i<n-1;i++){
            if(s[i] != s[i+1]){
                    count = true;
                    break;
             }
        }
    if( zero>one || count ) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 }
  }