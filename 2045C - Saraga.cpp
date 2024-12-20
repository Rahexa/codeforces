#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 #pragma GCC optimize("Ofast,unroll-loops")
 #define int long long
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
 using namespace std;
using namespace __gnu_pbds;
 template<class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; // find_by_order, order_of_key
 void solve(){
    string s, t;
    cin >> s >> t;
    int n = s.size();
     // A map to store the index of each character in string `t`
    map<char, int> m;
    int x = t.size();
        // Populate the map with characters from `t` and their corresponding indices
    for(int i = 0; i < x - 1; i++) m[t[i]] = i;
     // The variable `ans` will store the smallest abbreviation length found
    int ans = 1e18; // A large value to compare with
    int ind = -1;   // The index that gives the smallest abbreviation
     // Try to find the smallest interesting abbreviation
    for(int i = 1; i < n; i++){
        if(m.find(s[i]) != m.end()){ // Check if the character `s[i]` exists in `t`
            // Calculate the abbreviation length
            if(ans > x - m[s[i]] + i){
                ans = x - m[s[i]] + i;
                ind = i;
            }
        }
    }   
     if(ind == -1){ // If no valid abbreviation was found
        cout << -1 << endl;
        return;
    }
        // Construct the final abbreviation
    string f = "";
        // First part: Prefix of `s` up to index `ind`
    for(int i = 0; i <= ind; i++) f.push_back(s[i]);
     // Second part: Suffix of `t` starting after the index `m[s[ind]]`
    for(int i = m[s[ind]] + 1; i < x; i++) f.push_back(t[i]);
     cout << f << endl; // Output the abbreviation
}
 signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve(); // Call the solve function to run the problem-solving logic
        return 0;
}