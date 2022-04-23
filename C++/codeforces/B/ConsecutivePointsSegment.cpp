// https://codeforces.com/contest/1671/problem/B

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
#define coutArr(x) for (const auto& n : x) cout << n << " "; cout << "\n";
#define coutMap(m) for (const auto& [key, value] : m) cout << key << " " << value << "\n";

const fi64 MOD = 998244353;

void solve() 
{
    int n; cin >> n;
    vfi64 num(n);
    for (auto& x : num) cin >> x;

    for (int i = 0; i < n-1; ++i) {
        fi64 diff {num[i+1] - num[i]};
        if (diff <= 3) {
            num[i+1] = num[i] + 1;
        }
        else {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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