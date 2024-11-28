#include <iostream>
#include <string>
using namespace std;
 void solve() {
    string x;
    cin >> x;
    int n = x.length();
     if (n == 2 && x == "()") {
        cout << "NO" << endl;
        return;
    }
     string sb = "";
    for (int i = 0; i < n; ++i) {
        sb += "(";
    }
     for (int i = 0; i < n; ++i) {
        sb += ")";
    }
     if (sb.find(x) != string::npos) {
        sb = "";
        for (int i = 0; i < n; ++i) {
            sb += "()";
        }
        cout << "YES" << endl;
        cout << sb << endl;
    } else {
        cout << "YES" << endl;
        cout << sb << endl;
    }
}
 int main() {
    int testCases;
    cin >> testCases;
     for (int t = 0; t < testCases; ++t) {
        solve();
    }
     return 0;
}