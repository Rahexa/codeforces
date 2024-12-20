#include <bits/stdc++.h>
 using namespace std;
 #define     ll                              long long int
 #define     Faster                          ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define     pb                              push_back
   int main(){
    Faster;
    int t;                      cin>>t;
    while(t--){
        int n;                  cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        sort(a+1,a+n+1);
        int ans=0;
        for(int i=1;i<=n;i++){
            if(a[i]<i and (i==n or a[i+1]>i)){
                ans++;
            }
        }
        if(a[1]!=0){
            ans++;
        }
          cout<<ans<<endl;
    }
    return 0;
}