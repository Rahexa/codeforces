#include <bits/stdc++.h>
using namespace std;
 int main() {
    int t;
    cin >> t; // Number of test cases
     while (t--) {
        int n;
        cin >> n; // Size of the array
         vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i]; // Read array elements
        }
         long long sum = 0;  // Total sum of the array
        int count = 0; // To track the count of subarrays where sum - max_val == max_val
        long long max_val = v[0]; // Initialize with the first element as max value
         // Traverse the array and check the condition for subarrays
        for (int i = 0; i < n; i++) {
            sum += v[i]; // Update the running sum
            if (v[i] > max_val) {
                max_val = v[i]; // Update the max value
            }
             // Check the condition
            if (sum - max_val == max_val) {
                count++;
            }
        }
         // Output the result for the current test case
        cout << count << endl;
    }
     return 0;
}