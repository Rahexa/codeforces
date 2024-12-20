#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 int main() {
    int testCases;
    cin >> testCases;
     string ans;
     for (int t = 1; t <= testCases; ++t) {
        int n;
        cin >> n;
         vector<int> a(n), b(n);
         for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }
         long long sum = 0;
         // Calculate the sum of max(a[i], b[i])
        for (int i = 0; i < n; ++i) {
            sum += max(a[i], b[i]);
        }
         // Find the maximum of the minimums between a[i] and b[i]
        int minMax = min(a[0], b[0]);
        for (int i = 0; i < n; ++i) {
            minMax = max(min(a[i], b[i]), minMax);
        }
         // Add the minMax to the sum
        sum += minMax;
         // Append the result to the answer string
        ans += to_string(sum);
        if (t != testCases) {
            ans += "\n";
        }
    }
     // Output the final result
    cout << ans;
     return 0;
}