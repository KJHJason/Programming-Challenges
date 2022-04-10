// https://codeforces.com/contest/1661/problem/A

#include <bits/stdc++.h>
using namespace std;

typedef int_fast32_t fi32;
typedef int_fast64_t fi64;

typedef vector<int> vi;
typedef vector<fi64> vfi64;
typedef pair<int, int> pi;

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;

#define PB push_back
#define MP make_pair
#define F first
#define S second

void getInput(vfi64& arr)
{
    for (auto& i : arr) cin >> i;
}

void solve() 
{
    int n; cin >> n;
    n = n;
    vfi64 arrOne(n); getInput(arrOne);
    vfi64 arrTwo(n); getInput(arrTwo);

    // swap if bi is smaller than ai
    for (int i = 0; i < n; i++) {
        if (arrOne[i] < arrTwo[i]) {
            swap(arrOne[i], arrTwo[i]);
        }
    }

    fi64 ans{};
    for (int i = 0; i < n - 1; i++) {
        ans += abs(arrOne[i] - arrOne[i + 1]) + abs(arrTwo[i] - arrTwo[i + 1]);
    }

    cout << ans << "\n";
}

int main() 
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t = 1;
    bool haveTestCases = 1; // change accordingly
    if (haveTestCases) cin >> t;
    for (int i = 0; i < t; ++i) {
        solve();
    }
    return 0;
}