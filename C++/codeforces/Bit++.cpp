// https://codeforces.com/contest/282/problem/A

#include <bits/stdc++.h>
using namespace std;

int solve(string s) {
    if (s.find("--") != string::npos) {
        return -1;
    } else {
        return 1;
    }
}

int main() {
    int t; cin >> t;
    int ans;
    while (t--) {
        string s; cin >> s;
        ans += solve(s);
    }
    cout << ans;
    return 0;
}

// old solution below
// #include <bits/stdc++.h>
// using namespace std;

// #define br "\n";

// unordered_map<string, int> m = {
//         {"X++", 1},
//         {"++X", 1},
//         {"X--", -1},
//         {"--X", -1}
// };

// int solve(string s) {
//     int e = m.find(s) -> second;
//     // cout << "Retrieved value by key: " << e << br;
//     return e;
// }

// int main() {
//     int t; cin >> t;
//     int ans;
//     while (t--) {
//         string s; cin >> s;
//         transform(s.begin(), s.end(), s.begin(), ::toupper);
//         ans += solve(s);
//         // cout << "Value now: " << ans << br;
//     }
//     cout << ans;
//     return 0;
// }