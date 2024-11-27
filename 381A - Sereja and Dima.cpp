#include <bits/stdc++.h>
using namespace std;
int main(){
         int n;
        cin>>n;
        vector<int>v(n);
        for(int i = 0;i<n;i++){
            cin>>v[i];
         }
        int i = 0;
        int j = n-1;
        int s = 0;
        int d =0;
        int z = 0;
       while(i<=j){
            if(z%2 == 0){
                if(v[i]>v[j]){
                    s = s+v[i];
                    i++;
                }
                else {
                     s = s+v[j];
                    j--;
                }
               }
             else{
                if(v[i]>v[j]){
                    d = d+v[i];
                    i++;
                }
                else {
                     d = d+v[j];
                    j--;
                }
               }
        z++;
     }
     cout<<s<< " "<<d<<endl;
     }
 