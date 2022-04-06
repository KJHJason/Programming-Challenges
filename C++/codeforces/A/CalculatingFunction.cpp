// https://codeforces.com/contest/486/problem/A

#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

void solve(lli n) {
    lli total = 0;
    total = (n - (n/2));
    if (n % 2 != 0) {
        total = -total;
    } 
    cout << total;
}

int main() {
    lli n; cin >> n;
    solve(n);
    return 0;
}