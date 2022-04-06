// https://codeforces.com/contest/1660/problem/B

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
typedef vector<int64> VUI;
typedef unsigned long long int uint64;

void solve() {
    int cType; cin >> cType;
    VUI v;
    for (int i = 0; i < cType; i++) {
        int64 iInput; cin >> iInput;
        v.push_back(iInput);
    }
    sort(v.begin(), v.end());

    if (v.size() == 1) {
        if (v[0] != 1) cout << "NO\n";
        else cout << "YES\n";
        return;
    }

    cout << (v[cType-2] + 1 >= v[cType-1] ? "YES\n" : "NO\n");
} 


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    bool numOfTcs = 1;
    if (numOfTcs) cin >> t;
    for (int i = 0; i < t; ++i) {
        solve();
    }
    return 0;
}