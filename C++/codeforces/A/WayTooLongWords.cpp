// https://codeforces.com/problemset/problem/71/A

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
    string s; cin >> s;
    int sLen = s.length();
    if (sLen > 10) {
        int count = sLen - 2;

        string ans;
        ans = s[0] + to_string(count) + s.back();
        
        cout << ans << "\n";
    } else {
        cout << s << "\n";
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    bool haveTestCases = 1;
    if (haveTestCases) cin >> t;
    for (int i = 0; i < t; ++i) {
        solve();
    }
    return 0;
}