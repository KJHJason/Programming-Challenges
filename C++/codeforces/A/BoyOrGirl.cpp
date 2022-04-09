// https://codeforces.com/contest/236/problem/A

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
    unordered_set<char> s;
    string str; cin >> str;
    for (char c : str) s.insert(c);
    if (s.size() % 2 == 0) cout << "CHAT WITH HER!" << "\n";
    else cout << "IGNORE HIM!" << "\n";
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