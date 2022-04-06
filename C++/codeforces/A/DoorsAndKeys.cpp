// https://codeforces.com/contest/1644/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    vector<string> output;
    while (t--) {
        string input; cin >> input;
        set<char> keys;
        vector<char> doors;
        for (int i = 0; i < input.size(); i++) {
            if (islower(input[i])) {
                keys.insert(input[i]);
            } else {
                bool unlockable = keys.find(tolower(input[i])) != keys.end();
                // cout << "Door " << input[i] << " is " << (unlockable ? "unlockable\n" : "locked\n");
                if (unlockable) {
                    doors.push_back(input[i]);
                } else break;
            }
        }
        // cout << "Doors unlocked: " << doors.size() << "\n";
        if (doors.size() == 3) {
            output.push_back("YES");
        } else {
            output.push_back("NO");
        }
    }
    for (int i = 0; i < output.size(); i++) {
        cout << output[i] << endl;
    }
    return 0;
}