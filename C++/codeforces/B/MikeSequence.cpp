// https://codeforces.com/contest/1663/problem/B

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
typedef map<int, int> mii;
typedef map<fi64, fi64> mfifi;
typedef map<string, int> msi;
typedef map<string, fi64> msfi;

typedef long double ld;
typedef unsigned int ui;
typedef long int li;
typedef unsigned long int uli;
typedef long long int lli;
typedef unsigned long long int ulli;

#define PB push_back
#define MP make_pair
#define F first
#define S second
#define inpToVec(v) for (auto& i : v) cin >> i
#define sortA(v) sort(v.begin(), v.end())
#define sortD(v) sort(v.begin(), v.end(), greater{})
#define prtArr(x) for (const auto& n : x) cout << n << " "; cout << "\n"
#define prtMap(m) for (const auto& [key, value] : m) cout << key << " " << value << "\n"
#define prtY cout << "YES\n"
#define prtN cout << "NO\n"
#define prtYN(b) cout << (b ? "YES" : "NO") << "\n"
#define prtAns(ans) cout << ans << "\n"

const fi64 MOD {998244353};

void solve() 
{
    int n; cin >> n;
    if (n < 1200)
        prtAns(1200);
    else if (n < 1400)
        prtAns(1400);
    else if (n < 1600)
        prtAns(1600);
    else if (n < 1900)
        prtAns(1900);
    else if (n < 2100)
        prtAns(2100);
    else if (n < 2300)
        prtAns(2300);
    else if (n < 2400)
        prtAns(2400);
    else if (n < 2600)
        prtAns(2600);
    else if (n < 3000)
        prtAns(3000);
}

int main() 
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t = 1;
    bool haveTestCases = 0; // change accordingly
    if (haveTestCases) cin >> t;
    for (int i = 0; i < t; ++i) {
        solve();
    }
    return 0;
}