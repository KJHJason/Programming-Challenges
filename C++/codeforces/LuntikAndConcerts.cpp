#include <bits/stdc++.h>
using namespace std;
#define br "\n";

// https://codeforces.com/contest/1582/problem/A

int main() {
    int t; cin >> t;
    while (t--) {
        int a, b ,c; cin >> a >> b >> c;
        b = b * 2; // shortcut: b *= 2;
        c = c * 3;
        if ((a + b + c) % 2 == 0) {
            cout << 0 << br;
        } else {
            cout << 1 << br;
        }
    }
    return 0;
}