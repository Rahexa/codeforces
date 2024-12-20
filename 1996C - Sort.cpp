#include <bits/stdc++.h>
using namespace std;
 int main() {
    int t;
    cin >> t;  // Number of test cases
    while (t--) {
        int n, q;
        cin >> n >> q;  // Size of strings and number of queries
        string a, b;
        cin >> a >> b;  // Input the two strings
         // Initialize prefix frequency arrays for both strings
        vector<vector<int>> prefix_freq_a(n + 1, vector<int>(26, 0));
        vector<vector<int>> prefix_freq_b(n + 1, vector<int>(26, 0));
         // Preprocess prefix frequency array for string a
        for (int i = 0; i < n; i++) {
            prefix_freq_a[i + 1] = prefix_freq_a[i];  // Copy previous frequencies
            prefix_freq_a[i + 1][a[i] - 'a']++;      // Update current character count
        }
         // Preprocess prefix frequency array for string b
        for (int i = 0; i < n; i++) {
            prefix_freq_b[i + 1] = prefix_freq_b[i];  // Copy previous frequencies
            prefix_freq_b[i + 1][b[i] - 'a']++;      // Update current character count
        }
         while (q--) {
            int l, r;
            cin >> l >> r;  // Query range (1-indexed)
            l--, r--;  // Convert to 0-indexed
             int count = 0;
             // Compare frequencies for each character 'a' to 'z'
            for (int i = 0; i < 26; i++) {
                int freq_a = prefix_freq_a[r + 1][i] - prefix_freq_a[l][i];
                int freq_b = prefix_freq_b[r + 1][i] - prefix_freq_b[l][i];
                 // If character 'i' appears more times in 'a' than in 'b',
                // then it's absent in 'b' in the given range.
                if (freq_a > freq_b) {
                    count += freq_a - freq_b;
                }
            }
             // Output the result for this query
            cout << count << endl;
        }
    }
    return 0;
}