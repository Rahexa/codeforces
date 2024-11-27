#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
 using namespace std;
 int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    bool has_zero = false;
    int min_operations = INT_MAX;
     for (int i = 0; i < N; ++i) {
        cin >> A[i];
        if (A[i] == 0) {
            has_zero = true;
        } else {
            min_operations = min(min_operations, abs(A[i]));
        }
    }
     if (has_zero) {
        cout << 0 << endl;
    } else {
        cout << min_operations << endl;
    }
     return 0;
}