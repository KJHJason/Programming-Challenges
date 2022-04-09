// https://codeforces.com/contest/1658/problem/A

#include <bits/stdc++.h>
using namespace std;

typedef int_fast32_t fi32;
typedef int_fast64_t fi64;

typedef vector<int> vi;
typedef vector<fi64> vif64;
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
    // 0 is a male, 1 is a female
    int n; string s; cin >> n >> s; 
    int ans{};
    for (int i = 0; i < n; ++i) {
        // if male
        if (s[i] == '0') {
            // if the next element is also a male "00" --> need 2 females to become "0011"
            if (s[i+1] == '0' && i + 1 < n) ans += 2;
            // if the element at i + 2 is also a male "010" --> need one more female "0110"
            else if (s[i+2] == '0' && i + 2 < n) ans++;
        }
    }
    cout << ans << "\n";
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