// Codeforces template by KJHJason
// For C++20

#include <bits/stdc++.h>
using namespace std;

typedef int_fast32_t fi32;
typedef int_fast64_t fi64;

typedef vector<int> vi;
typedef vector<fi64> vfi64;
typedef pair<int, int> pii;
typedef unordered_map<int, int> umii;
typedef unordered_map<fi64, fi64> umfi64;
typedef unordered_map<string, int> umsi;
typedef unordered_map<string, fi64> umsfi64;

typedef long int li;
typedef unsigned long int uli;
typedef long long int lli;
typedef unsigned long long int ulli;

#define PB push_back
#define MP make_pair
#define F first
#define S second
#define sortA(v) sort(v.begin(), v.end());
#define sortD(v) sort(v.begin(), v.end(), greater{});
#define coutArr(x) for (const auto& n : x) cout << n << " "; cout << "\n";
#define coutMap(m) for (const auto& [key, value] : m) cout << key << " " << value << "\n";
#define coutY cout << "YES\n";
#define coutN cout << "NO\n";
#define coutYN(b) cout << (b ? "YES" : "NO") << "\n";
#define coutAns(ans) cout << ans << "\n";

const fi64 MOD = 998244353;

void solve() 
{
    // code here
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