#include <iostream>
using namespace std;
 #define MAX_POWER 33
 long long powersOfTwo[MAX_POWER];  // To store powers of 2 from 2^0 to 2^32
 void solve() {
    long long l, r;
    cin >> l >> r;
     // Start checking from the largest power of 2 (2^32)
    for (int i = MAX_POWER - 1; i >= 0; i--) {
        if (l <= powersOfTwo[i] && powersOfTwo[i] <= r) {
            cout << i << endl;  // Output the index (which is the exponent of 2)
            return;  // We found the answer, no need to check further
        }
    }
}
 int main() {
    // Precompute powers of 2 up to 2^32
    powersOfTwo[0] = 1;
    for (int i = 1; i < MAX_POWER; i++) {
        powersOfTwo[i] = powersOfTwo[i-1] * 2;
    }
     int t;
    cin >> t;  // Read the number of test cases
    while (t--) {
        solve();  // Solve each test case
    }
     return 0;
}