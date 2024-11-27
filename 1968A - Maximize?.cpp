#include <bits/stdc++.h>
using namespace std;
 int main() {
    int t;
    cin >> t;
        while (t--) {
        int x;
        cin >> x;
                vector<int> v;
                // Step 1: Fill the vector v with GCD(i, x) + i for i in [1, x-1]
        for (int i = 1; i < x; i++) {
            int g = __gcd(i, x);
            v.push_back(g + i);
        }
         // Step 2: Find the index of the maximum value in the vector
        int max_value = v[0];
        int index = 0;
                for (int i = 1; i < v.size(); i++) { // Change loop to avoid out-of-bounds access
            if (v[i] > max_value) {
                max_value = v[i];
                index = i;
            }
        }
         // Step 3: Output the index (1-based) of the maximum value
        cout << index + 1 << endl;  // +1 to convert from 0-based to 1-based index
    }
        return 0;
}