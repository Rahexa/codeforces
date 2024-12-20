#include <bits/stdc++.h>
using namespace std;
  #define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define INF 100000000
   int main(){
    Faster;
    int t;     cin>>t;
    while(t--){
     string s;   cin>>s;
     int n=s.size();
      vector<int> a;
     for(int i=0;i<n;i++)a.push_back(s[i]-'0');
      for(int i=0;i<n;i++){
      int indx=i;
      int mx=a[i];
      for(int j=i;j<=min(n-1,i+12);j++){
       if(a[j]-(j-i)>=0 and a[j]-(j-i)>mx){
        mx=a[j]-(j-i);
        indx=j;
       }
      }
       while(indx>i){
       a[indx]--;
       swap(a[indx],a[indx-1]);
       indx--;
      }
     }
          for(int i=0;i<n;i++)cout<<a[i];
      cout<<endl;
     }
    return 0;
}