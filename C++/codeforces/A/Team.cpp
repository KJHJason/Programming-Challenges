// https://codeforces.com/problemset/problem/231/A

#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pi;

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;
typedef int_fast32_t fint32;
typedef int_fast64_t fint64;

#define PB push_back
#define MP make_pair
#define F first
#define S second

void solve() 
{
    int n; cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int a, b, c; cin >> a >> b >> c;
        if (a + b + c >= 2) ans++;
    }
    cout << ans << "\n";
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    bool haveTestCases = 0; // change accordingly
    if (haveTestCases) cin >> t;
    for (int i = 0; i < t; ++i) {
        solve();
    }
    return 0;
}