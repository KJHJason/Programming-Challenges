// https://codeforces.com/problemset/problem/1095/B

#include <bits/stdc++.h>
using namespace std;

void solve(int len, int arr[]) {
    sort(arr, arr + len);
    // remove the last element
    int diffOne = arr[len-2] - arr[0];

    // remove the first element
    int diffSec = arr[len-1] - arr[1];
    cout << min(diffOne, diffSec) << "\n";
}

int main() {
    int len; cin >> len;
    int arr[len] = { 0 };
    for (int i = 0; i < len; i++) {
        cin >> arr[i];
    }
    solve(len, arr);
    return 0;
}