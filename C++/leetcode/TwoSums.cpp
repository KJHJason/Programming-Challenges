// https://leetcode.com/problems/two-sum/

#include <bits/stdc++.h>
using namespace std;

typedef int_fast32_t fi32;
typedef int_fast64_t fi64;

typedef vector<int> vi;
typedef vector<fi64> vfi64;
typedef pair<int, int> pii;
typedef unordered_map<int, int> umii;
typedef unordered_map<fi64, fi64> umfi64;
typedef unordered_map<string, int> umsi;
typedef unordered_map<string, fi64> umsfi64;
typedef map<int, int> mii;
typedef map<fi64, fi64> mfifi;
typedef map<string, int> msi;
typedef map<string, fi64> msfi;

typedef long double ld;
typedef long int li;
typedef unsigned long int uli;
typedef long long int lli;
typedef unsigned long long int ulli;

#define PB push_back
#define MP make_pair
#define F first
#define S second
#define inpToVec(v) for (auto& i : v) cin >> i
#define sortA(v) sort(v.begin(), v.end())
#define sortD(v) sort(v.begin(), v.end(), greater{})
#define prtArr(x) for (const auto& n : x) cout << n << " "; cout << "\n"
#define prtMap(m) for (const auto& [key, value] : m) cout << key << " " << value << "\n"
#define prtY cout << "YES\n"
#define prtN cout << "NO\n"
#define prtYN(b) cout << (b ? "YES" : "NO") << "\n"
#define prtAns(ans) cout << ans << "\n"

const fi64 MOD {998244353};

vector<int> twoSum(vector<int>& nums, int target) 
{
    unordered_map<int, int> m;
    for (int i = 0; i < nums.size(); ++i) {
        if (m.find(target - nums[i]) != m.end())
            return {m[target - nums[i]], i};
        else
            m[nums[i]] = i;
    }
    return {-1, -1};
}

int main() 
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    // demo test cases
    cout << "Test 1 input: ";
    vector<int> t = {3,2,4};
    prtArr(t);
    vector<int> res = {1, 2};
    assert(twoSum(t, 6) == res);
    prtAns("Test 1 passed\n");

    cout << "Test 2 input: ";
    t = {3,3};
    prtArr(t);
    res = {0, 1};
    assert(twoSum(t, 6) == res);
    prtAns("Test 2 passed\n");

    cout << "Test 3 input: ";
    t = {2,7,11,15};
    prtArr(t);
    res = {0, 1};
    assert(twoSum(t, 9) == res);
    prtAns("Test 3 passed");

    return 0;
}