#include <bits/stdc++.h>
using namespace std;
 bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}
 string getPrimeSubsequence(string s) {
    int n = s.size();
    for (int length = 1; length <= n; length++) {
        for (int mask = 1; mask < (1 << n); mask++) {
            if (__builtin_popcount(mask) == length) {
                string num = "";
                for (int i = 0; i < n; i++) {
                    if (mask & (1 << i)) {
                        num += s[i];
                    }
                }
                if (num.size() > 1 && isPrime(stoi(num))) {
                    return num;
                }
            }
        }
    }
    return "-1";
}
 int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        string result = getPrimeSubsequence(s);
        cout << result << endl;
    }
    return 0;
}