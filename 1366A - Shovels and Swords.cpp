#include <bits/stdc++.h> 
using namespace std;
int main() 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t=1;
    cin>>t;
        while(t--)
        {
                 int a,b;
                 cin>>a>>b;
                                  cout<<min({a,b,(a+b)/3})<<endl;
                         }
    return 0; 
} 