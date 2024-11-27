#include <bits/stdc++.h>
using namespace std;
#define fast {ios_base::sync_with_stdio(false); cin.tie(0);}
typedef long long ll;
 int main()
{
    fast
    ll i, j, k, m, n, c, t, x, y;
    cin >> t;
    while (t--) {
        string s;
        cin >> n >> s;
        ll ans = 0;
        for (i = 0; i <= n - 3; i++) {
            if (s.substr(i, 3) == "map" || s.substr(i, 3) == "pie") ans++;
            if (i <= n - 5 && s.substr(i, 5) == "mapie") ans--;
        }
        cout << ans << "\n";
    }
    return 0;
}