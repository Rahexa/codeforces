#include <bits/stdc++.h>
using namespace std;
 int main() {
    int t; // Number of test cases
    cin >> t;
     while (t--) {
        int n; // Size of the permutation
        cin >> n;
        vector<int> v(n);
         for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
         // Check if the array is already sorted
        bool sorted = true;
        for (int i = 1; i < n; i++) {
            if (v[i - 1] > v[i]) {
                sorted = false;
                break;
            }
        }
         if (sorted) {
            cout << "YES" << endl;
            continue;
        }
         // Try sorting the array using the given operation
        bool can_sort = false;
        for (int step = 0; step < n; step++) {
            bool swapped = false;
             for (int i = 1; i < n - 1; i++) {
                if (v[i - 1] < v[i] && v[i] > v[i + 1]) {
                    swap(v[i], v[i + 1]);
                    swapped = true;
                }
            }
             // Check if the array is sorted after swaps
            sorted = true;
            for (int i = 1; i < n; i++) {
                if (v[i - 1] > v[i]) {
                    sorted = false;
                    break;
                }
            }
             if (sorted) {
                can_sort = true;
                break;
            }
             // If no swaps were made in this iteration, break out early
            if (!swapped) break;
        }
         if (can_sort) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
     return 0;
}