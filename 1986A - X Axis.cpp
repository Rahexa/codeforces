#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int a,b,c,d;
    cin>>a>>b>>c;
     int x =  (abs(a-b)+abs(b-b)+abs(c-b));
        int y =  (abs(a-c)+abs(b-c)+abs(c-c));
    int z =  (abs(a-a)+abs(b-a)+abs(c-a));
 int ans =min(x,min(y,z));
cout<<ans<<endl;
  }
}