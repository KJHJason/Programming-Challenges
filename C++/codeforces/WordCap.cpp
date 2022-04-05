// https://codeforces.com/problemset/problem/281/A

#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef map<int,int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;

void solve() {
    string s; cin >> s;
    s[0] = toupper(s[0]);
    cout << s << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    bool numOfTcs = 0;
    if (numOfTcs) cin >> t;
    for (int i = 0; i < t; ++i) {
        solve();
    }
    return 0;
}