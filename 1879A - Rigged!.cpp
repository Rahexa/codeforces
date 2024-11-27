#include <bits/stdc++.h>
#define int long long
using namespace std;
 void solve() {
    int n;
    cin >> n;
     int s, e;
    cin >> s >> e;
     int f = 0;
     for (int i = 1; i < n; i++) {
        int s1, e1;
        cin >> s1 >> e1;
        if (s1 >= s) {
            if (e1 >= e) f = 1;
        }
    }
     if (f)
        cout << -1 << endl;
    else
        cout << s << endl;
}
 int32_t main() {
    int t;
    cin >> t;
     while (t--) {
        solve();
    }
     return 0;
}