// https://codeforces.com/contest/1095/problem/A

#include <bits/stdc++.h>
using namespace std;

void solve(int len, string str) {
    int offset = { 0 };
    for (int i = 0; i < len; i++) {
        cout << str[i];
        i += offset;
        offset++;
    }
}
    
int main() {
    int len; cin >> len;
    string input; cin >> input;
    solve(len, input);
    return 0;
}