#include <bits/stdc++.h>
using namespace std;
#define int long long
 signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
         vector<int> a(n, 0);
        int nstart = 1;
         // Fill positions with step k starting from k-1
        for (int i = k - 1; i < n; i += k) {
            a[i] = nstart++;
        }
         // Fill remaining positions
        for (int i = 0; i < n; i++) {
            if (a[i] == 0) {
                a[i] = nstart++;
            }
        }
         // Output the result
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
     return 0;
}