#include<bits/stdc++.h>
using namespace std;
 void solve() {
    string s, t;
    cin >> s >> t;
        int n = s.size();
    int x = t.size();
        map<char, int> m; // Map to store the index of each character in t
    for(int i = 0; i < x - 1; i++) {
        m[t[i]] = i;
    }
     int ans = 1e18;
    int ind = -1;
     // Find the smallest interesting abbreviation
    for(int i = 1; i < n; i++) {
        if(m.find(s[i]) != m.end()) {
            int len = x - m[s[i]] + i;
            if(ans > len) {
                ans = len;
                ind = i;
            }
        }
    }
     // Output result
    if(ind == -1) {
        cout << -1 << endl;
        return;
    }
     string f = "";
    // Prefix part from s[0..ind]
    for(int i = 0; i <= ind; i++) f.push_back(s[i]);
    // Suffix part from t starting after index m[s[ind]]
    for(int i = m[s[ind]] + 1; i < x; i++) f.push_back(t[i]);
     cout << f << endl;
}
 int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}