#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int a = s[0] - '0';
       int b = s[1] - '0';
       int c = s[2] - '0';
       int d = s[3] - '0';
        if( a == 0 ) a= 10;
       if( b == 0 ) b= 10;
       if( c == 0 ) c= 10;
      if( d == 0 ) d= 10;
   int x = abs(b-a)+1;
 int y = abs(c-b)+1;
 int z = abs(d-c)+1;
 int ans = a+x+y+z;
 cout<<ans<<endl;
     }
}
 