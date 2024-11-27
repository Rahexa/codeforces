#include <iostream>
#include <vector>
using namespace std;
 int testCases, n;
vector<vector<char>> mat;
 void solve() {
    long long total_cost = 0L;
     for (int i = 0; i < n; ++i) {
        int cross_count = 0;
         // First row
        for (int j = i; j < n - i; ++j) {
            if (mat[i][j] == 'X') {
                ++cross_count;
            }
        }
         // First column
        for (int j = i + 1; j < n - i; ++j) {
            if (mat[j][n - i - 1] == 'X') {
                ++cross_count;
            }
        }
         // Second row
        for (int j = i; j < n - i - 1; ++j) {
            if (mat[n - i - 1][j] == 'X') {
                ++cross_count;
            }
        }
         // Second column
        for (int j = i + 1; j < n - i - 1; ++j) {
            if (mat[j][i] == 'X') {
                ++cross_count;
            }
        }
         total_cost += (cross_count * (i + 1));
    }
     cout << total_cost << endl;
}
 int main() {
    cin >> testCases;
     for (int t = 0; t < testCases; ++t) {
        n = 10;
        mat = vector<vector<char>>(n, vector<char>(n));
         // Input matrix
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> mat[i][j];
            }
        }
         solve();
    }
     return 0;
}