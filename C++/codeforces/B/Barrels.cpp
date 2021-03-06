// https://codeforces.com/contest/1430/problem/B

#include <bits/stdc++.h>
using namespace std;

typedef int_fast32_t fint32;
typedef int_fast64_t fint64;

typedef vector<int> vi;
typedef vector<fint64> vif64;
typedef pair<int, int> pi;

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;

#define PB push_back
#define MP make_pair
#define F first
#define S second

void solve() 
{
    int n, pours; cin >> n >> pours;
    vif64 v(n);
    for (auto& i : v) cin >> i;
    
    sort(v.begin(), v.end());
    for (fint64 i = 1; i <= pours; ++i) {
        if (v.back() == 0) break;
        v.back() += v[n - (i + 1)];
    }

    cout << v.back() << "\n";
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    bool haveTestCases = 1; // change accordingly
    if (haveTestCases) cin >> t;
    for (int i = 0; i < t; ++i) {
        solve();
    }
    return 0;
}