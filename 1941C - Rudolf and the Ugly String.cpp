#include <bits/stdc++.h>
using namespace std;
 int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        for (int i = 0; i <= n - 3; i++) {
            if (s.substr(i, 3) == "map" || s.substr(i, 3) == "pie") {
                count++;
            }
            if (i <= n - 5 && s.substr(i, 5) == "mapie") {
                count--;
            }
        }
        cout << count << endl;
    }
    return 0;
}