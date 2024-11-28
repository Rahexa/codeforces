#include <bits/stdc++.h>
#define IO                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
typedef long long int ll;
typedef long double LD;
#define w(t)     \
    int t;       \
    cin >> t;    \
    while (t--)  \
    {            \
        solve(); \
    }
using namespace std;
 void solve()
{
    int n; cin >> n;
    vector<int> arr(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    vector<int> cmp2, cmp1;
    for(auto i:mp) {cmp2.push_back(i.second); cmp1.push_back(i.first);}
    for (int i = 0; i < cmp2.size() - 1; i++)
    {
        if(cmp2[i] < cmp2[i + 1]) {cout << "NO" << endl; return;}
    }
    for (int i = 0; i < cmp1.size(); i++)
    {
        if(cmp1[i] != i) {cout << "NO" << endl; return;}
    }
    cout << "YES" << endl;
}
 int main()
{
    IO;
    // solve();
    w(t);
    return 0;
}
   