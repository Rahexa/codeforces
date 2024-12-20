#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
     string s;cin>>s;
    string r="NO";
    for(int i=s.length()/2+1;i<s.length();i++)
    {
        if(s.substr(0,i)==s.substr(s.length()-i,i))
        {
            r="YES\n"+s.substr(0,i);
            break;
        }
    }
    cout<<r;
     return 0;
}