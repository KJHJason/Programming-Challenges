// https://codeforces.com/contest/1660/problem/A
#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef map<int,int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;

void solve() {
    int a, b; cin >> a >> b;
    int ans;
    int total = a + (b * 2);
    if (a) ans = total + 1;
    else ans = 1;
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    bool numOfTcs = 1;
    if (numOfTcs) cin >> t;
    for (int i = 0; i < t; ++i) {
        solve();
    }
    return 0;
}