// https://codeforces.com/contest/1669/problem/C

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

bool check_parity(const vi& v) {
    int n = v.size();
    int odd{}, even{};
    for (int i = 0; i < n; i++) {
        if (v[i] % 2 != 0) {
            even++;
        } 
        else {
            odd++;
        }
    }
    if (odd > 0) return odd == n;
    else return even == n;
}

void solve() 
{
    int n; cin >> n;
    vi arr(n);
    for (auto& x : arr) cin >> x;

    if (!check_parity(arr)) {
        // even index
        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) arr[i]++;
        }
        if (!check_parity(arr)) {
            // odd index
            for (int i = 0; i < n; ++i) {
                if (i % 2 != 0) arr[i]++;
            }
        }
        // for (auto& x : arr) cout << x << " ";
        // cout << "\n";
        cout << (check_parity(arr) ? "YES" : "NO") << "\n";
    }
    else cout << "YES\n";
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