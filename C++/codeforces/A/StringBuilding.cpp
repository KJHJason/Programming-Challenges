// https://codeforces.com/contest/1671/problem/A

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
    string s; cin >> s;
    int n = s.length();
    vi num;
    for (int i = 0; i < n; i++) {
        char otherChar;
        if (s[i] == 'a') {
            otherChar = 'b';
        }
        else {
            otherChar = 'a';
        }
        int oC{};
        for (int j = i; j < n; j++) {
            if (s[j] != otherChar) {
                oC++;
            }
            else break;
        }
        num.PB(oC);
        i += oC - 1;
    }
    for (auto& n : num) {
        if (n % 2 != 0) n -= 3;

        if (n >= 0) {
            int res{};
            if (n % 2 == 0) res = n % 2;
            else res = n % 2;
            if (res != 0) {
                cout << "NO\n";
                return;
            }
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