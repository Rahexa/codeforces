#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
 int n;
cin>>n;
vector<long long>v(n);
vector<long long>u(n);
   long long sum = 0;
for(int i = 0;i<n;i++){
    cin>>v[i];
    sum = sum+v[i];
 }
long long sum1 = 0;
for(int i = 0;i<n;i++){
    cin>>u[i];
    sum1 = sum1+u[i];
 }
sort(v.begin(),v.end());
sort(u.begin(),u.end());
  long long ans = sum + (n*u[0]);
long long ans1 = sum1 + (n*v[0]);
long long result = min(ans,ans1);
cout<<result<<endl;
 }
 }