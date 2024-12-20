#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 void solve() {
    ll n, m, q;
    cin >> n >> m >> q;
     vector<ll> a(n), b(m);
    for (ll &x : a) cin >> x;
    for (ll &x : b) cin >> x;
     // Create a mapping of elements in `a` to their positions
    vector<ll> position(n + 1);
    for (ll i = 0; i < n; i++) {
        position[a[i]] = i;
    }
     ll count = 0;
    map<ll, bool> used;
     for (ll i = 0; i < m; i++) {
        ll requiredPosition = position[b[i]];
         if (used[b[i]]) {
            // Already used this element
            continue;
        }
         if (count == requiredPosition) {
            // Element matches the required position in sequence
            count++;
            used[b[i]] = true;
        } else {
            // If sequence is not maintained
            cout << "TIDAK" << endl;
            return;
        }
    }
     // If we successfully process all elements
    cout << "YA" << endl;
}
 int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ll t;
    cin >> t;
    while (t--) {
        solve();
    }
     return 0;
}