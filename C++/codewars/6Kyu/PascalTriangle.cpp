// https://www.codewars.com/kata/5226eb40316b56c8d500030f/train/cpp

#include <iostream>
#include <vector>

#define PB push_back
#define MP make_pair
#define F first
#define S second

typedef long long ll;

std::vector<ll> pascalsTriangle(int n)
{
    std::vector<ll> res;
    for (ll i = 0; i < n; i++) {
        ll val{1};
        for (int j = 0; j <= i; j++) {
            res.PB(val);
            val = val * (i - j) / (j + 1);
        }
    }
    return res;
}

int main()
{
    std::vector<ll> ans = pascalsTriangle(4);
    for (int i = 0; i < ans.size(); i++)
    {
        std::cout << ans[i] << " ";
    }

    return 0;
}