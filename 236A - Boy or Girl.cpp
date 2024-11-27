#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
      sort(s.begin(),s.end());
    auto last= unique(s.begin(),s.end());
     s.resize(distance(s.begin(),last));
     if(s.size()%2 == 0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
}