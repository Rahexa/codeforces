#include <bits/stdc++.h>
using namespace std;
 int main() {
    int t;
    cin >> t;  // Number of test cases
        while (t--) {
        int n;
        cin >> n;  // Number of elements in the array
        vector<int> v(n);
         // Input the elements into the vector
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
         // Sort the array
        sort(v.begin(), v.end());
         int count = 0;
         // Loop until n-1, so that we don't go out of bounds when accessing v[i+1]
        for (int i = 0; i < n - 1; i++) {  // Loop till n-1
            if (v[i] == v[i + 1]) {  // If consecutive elements are the same
                count++;  // Increment count for every pair found
                i++;  // Skip the next element since it's already paired with v[i]
            }
        }
         cout << count << endl;  // Output the result for the current test case
    }
     return 0;
}