#include <bits/stdc++.h>
using namespace std;
int main (){
int t;
cin>>t;
while(t--){
     int n,m;
    cin>>n>>m;
    string x,s;
    cin>>x>>s;
 string current = x;
int found = false;
int pos = 0;
 while(current.size() <= 50){
    if(current.find(s) !=string::npos){
        found = true;
        break;
     }
    current += current;
    pos++;
  }
 if(found){
    cout<<pos<<endl;
   }
 else{
     cout<<-1<<endl;
  }
}
 }