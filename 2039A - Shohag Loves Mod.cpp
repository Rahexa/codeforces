#include <bits/stdc++.h>
using namespace std;
  int main() {
    int tt;
    cin >> tt;
     while (tt--) {
        int n;
        cin >> n;
         cout << "1 ";
         int count = 1;
         for (int i = 2; i <= n; ++i) {
            cout << (i + count) << " ";
            count++;
        }
         cout << endl;
    }
  }