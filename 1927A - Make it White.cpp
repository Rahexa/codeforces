#include <bits/stdc++.h>
using namespace std;
 int main() {
    int t;
    cin >> t;
     while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
         // Find the index of the first 'B' from the left (i)
        int left = -1;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'B') {
                left = i;
                break;
            }
        }
         // Find the index of the last 'B' from the right (j)
        int right = -1;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == 'B') {
                right = i;
                break;
            }
        }
         // If no 'B' was found in the string, output 0 (no B's or W's in range)
        if (left == -1 || right == -1) {
            cout << 0 << endl;
            continue;
        }
         // Count 'B' and 'W' in the range [left, right]
        int b_count = 0, w_count = 0;
        for (int i = left; i <= right; i++) {
            if (s[i] == 'B') {
                b_count++;
            } else if (s[i] == 'W') {
                w_count++;
            }
        }
         // Output the sum of 'B' and 'W' counts in the range
        cout << b_count + w_count << endl;
    }
     return 0;
}