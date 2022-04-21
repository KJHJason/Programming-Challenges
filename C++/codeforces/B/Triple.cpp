// https://codeforces.com/contest/1669/problem/B

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
    int l; cin >> l;
    unordered_map<int, int> m;
    for (int i = 0; i < l; i++) {
        int x; cin >> x;
        auto it = m.find(x);
        if (it != m.end()) {
            m[x]++;
        } 
        else {
            m[x] = 1;
        }
    }

    for (const auto& [key, value] : m) {
        if (value >= 3) {
            cout << key << "\n";
            return;
        }
    } 
    cout << "-1\n";
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