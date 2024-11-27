#include <bits/stdc++.h>
using namespace std;
 int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
         int min_val = v[0];
        int max_val = v[0];
         bool possible = true;
         for (int i = 1; i < n; i++) {
            if (v[i] == min_val - 1) {
                min_val = v[i];  // Extend the range downwards
            } else if (v[i] == max_val + 1) {
                max_val = v[i];  // Extend the range upwards
            } else {
                possible = false;  // No adjacency found
                break;
            }
        }
         if (possible)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}