#include <iostream>
using namespace std;
 int main() {
    int t;
    cin >> t; // number of test cases
    while (t--) {
        int n;
        cin >> n; // input the value of n
        if (n % 2 == 0) {
            for (int i = 0; i < n - 2; i++) {
                cout << "3";
            }
            cout << "66" << endl;
        } else if (n == 1 || n == 3) {
            cout << -1 << endl;
        } else {
            for (int i = 0; i < n - 5; i++) {
                cout << "3";
            }
            cout << "36366" << endl;
        }
    }
    return 0;
}