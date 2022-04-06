// https://codeforces.com/problemset/problem/200/B

#include <bits/stdc++.h>
using namespace std;

typedef long double ld;

void solve() 
{
    int n, total;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        total += x;
    }
    ld ans = total / ld(n);
    cout << fixed << setprecision(15) << ans << endl;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    bool numOfTcs = 0; 
    if (numOfTcs) cin >> t;
    for (int i = 0; i < t; ++i) {
        solve();
    }
    return 0;
}