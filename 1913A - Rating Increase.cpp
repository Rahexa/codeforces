#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string s1 = "";
        s1+=s[0];
        string s2 = "";
        int j = 0;
        for(int i=1;i<s.size();i++){
            if(s[i] =='0'){
                s1+=s[i];
            }
            else{
                j = i;
                break;
                            }
        }
        for(;j<s.size();j++){
            s2+=s[j];
        }
                long long int a  = stoi(s1);
        long long int b  = stoi(s2);
        if(a>=b){
            cout<<-1<<endl;
        }
        else{
            cout<<a<<" "<<b<<endl;
        }
                                                            }
}