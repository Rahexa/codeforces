#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 void CASES() {
    int n;
    cin >> n;
    vector<int> a(n);
    unordered_set<int> elements;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        elements.insert(a[i]);
    }
     if (n == 3) {
        cout << 1 << ' ' << 1 << '\n';
        return;
    }
     int target = n - 2;
     for (int d = 1; d * d <= target; d++) {
        if (target % d == 0) {
            int div1 = d, div2 = target / d;
            if (elements.count(div1) && elements.count(div2)) {
                cout << div1 << ' ' << div2 << '\n';
                return;
            }
        }
    }
}
 int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
     int t;
    cin >> t;
    while (t--) {
        CASES();
    }
    return 0;
}