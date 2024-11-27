#include <bits/stdc++.h>
using namespace std;
 int main() {
    int tt;
    cin >> tt;  // Read the number of test cases
    while (tt--) {
        int n;
        cin >> n;  // Read the size of the vector
        vector<int> vec(n);
         // Read the vector elements
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }
         int ans = vec[n - 1];  // Start with the last element of the vector
        int mx = -1;
         // Find the maximum value in the vector from the beginning to the second-to-last element
        for (int i = 0; i < n - 1; i++) {
            mx = max(mx, vec[i]);
        }
         ans += mx;  // Add the maximum value to ans
        cout << ans << endl;  // Output the result for the current test case
    }
    return 0;
}