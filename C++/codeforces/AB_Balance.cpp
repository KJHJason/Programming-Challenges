#include <bits/stdc++.h>
using namespace std;
#define br "\n";

// https://codeforces.com/problemset/problem/1606/A

string getABorBA(string in, int i) {
    string ss;
    ss += in[i];
    ss += in[i+1];
    return ss;
}

tuple <int, int> getNumOfABorBA(string in) {
    int ab = 0;
    int ba = 0;
    int strlen = in.length();
    for (int i = 0; i < strlen; i++) {
        string ss = getABorBA(in, i);
        if (ss == "ab") {
            ab++;
        } else if (ss == "ba") {
            ba++;
        }
    }
    return {ab, ba};
}

int main() {
    int t; cin >> t;
    while (t--) {
        string in; cin >> in;
        int ab = 0, ba = 0;
        int strlen = in.length();
        if (strlen > 1) {
            tie(ab, ba) = getNumOfABorBA(in);
            // cout << "Num of ab: " << ab << br;
            // cout << "Num of ba: " << ba << br;
            if (ab > ba) {
                for (int i = strlen; i > 0; i--) {
                    in.replace(i-1, 1, "a");
                    tie(ab, ba) = getNumOfABorBA(in);
                    if (ab == ba) break;
                }
            } else if (ba > ab) {
                for (int i = strlen; i > 0; i--) {
                    in.replace(i-1, 1, "b");
                    tie(ab, ba) = getNumOfABorBA(in);
                    if (ab == ba) break;
                }
            }
            cout << in << br;
        } else {
            cout << in << br;
        }
    }
    return 0;
}