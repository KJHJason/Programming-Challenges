// https://codeforces.com/contest/581/problem/A

#include <bits/stdc++.h>
using namespace std;

typedef int_fast32_t fint32;
typedef int_fast64_t fint64;

typedef vector<int> vi;
typedef vector<fint64> vif64;
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
    int r, b; cin >> r >> b;
    if (r != b) {
        int biggest = ((r > b) ? r : b);
        int smallest = ((r > b) ? b : r);
        cout << smallest << " " << (biggest - smallest) / 2 << "\n";
    } else cout << r << " 0" << "\n";
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    bool haveTestCases = 0; // change accordingly
    if (haveTestCases) cin >> t;
    for (int i = 0; i < t; ++i) {
        solve();
    }
    return 0;
}