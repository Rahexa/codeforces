#include <bits/stdc++.h>
using namespace std;
 int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
                vector<int> v(n), u(n);
                // Use long long for sums to avoid overflow
        long long sum = 0, sum1 = 0;
                // Read first sequence v and calculate sum of its elements
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            sum += v[i];
        }
                // Read second sequence u and calculate sum of its elements
        for (int i = 0; i < n; i++) {
            cin >> u[i];
            sum1 += u[i];
        }
                // Sort both sequences to easily access their smallest elements
        sort(v.begin(), v.end());
        sort(u.begin(), u.end());
                // Calculate two potential results:
        // ans = sum of v + n * smallest element of u
        long long ans = sum + (n * (long long)u[0]);
                // ans1 = sum of u + n * smallest element of v
        long long ans1 = sum1 + (n * (long long)v[0]);
                // Output the minimum of both possible results
        long long result = min(ans, ans1);
        cout << result << endl;
    }
}