#include <bits/stdc++.h> 
using namespace std;
#define ll long long
int main() 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t=1;
    cin>>t;
        while(t--)
        { 
                 int m,n;
                 cin>>n>>m;
                                  if(n==1)
                 cout<<0<<endl;
                 else if(n==2)
                 cout<<m<<endl;
                 else 
                 cout<<(m+m)<<endl;
                        }
    return 0; 
} 