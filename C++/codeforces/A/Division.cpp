// https://codeforces.com/contest/1669/problem/0

#include <bits/stdc++.h>
using namespace std;

typedef int_fast32_t fi32;
typedef int_fast64_t fi64;

typedef vector<int> vi;
typedef vector<fi64> vfi64;
typedef pair<int, int> pii;

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;

#define PB push_back
#define MP make_pair
#define F first
#define S second

const fi64 MOD = 998244353;

void solve() 
{
    int n; cin >> n;
    if (n >= 1900) cout << "Division 1";
    else if (n >= 1600 && n <= 1899) cout << "Division 2";
    else if (n >= 1400 && n <= 1599) cout << "Division 3";
    else cout << "Division 4";
    cout << "\n";
}

int main() 
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t = 1;
    bool haveTestCases = 1; // change accordingly
    if (haveTestCases) cin >> t;
    for (int i = 0; i < t; ++i) {
        solve();
    }
    return 0;
}