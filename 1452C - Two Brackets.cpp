#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
  string s;
  cin>>s;
  int move = 0;
  int open1 = 0;
   int open2 = 0;
  for(int i = 0;i<s.size();i++){
     if(s[i] == '(' ){
  open1++;
        }
       else if(s[i] == '['){
            open2++;
        }
         else if(s[i] == ')'){
        if(open1>= 1){
            move++;
            open1--;
        }
        }
       else if(s[i] == ']'){
        if(open2>= 1){
            move++;
            open2--;
        }
        }
   }
    cout<<move<<endl;
  }
}