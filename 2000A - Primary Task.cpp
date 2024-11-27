#include <bits/stdc++.h>
using namespace std;
 int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (s[0] == '1' && s[1] == '0' && s[2]+s[3] >='2' && s[2] != '0') {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}