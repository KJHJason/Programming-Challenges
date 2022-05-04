// https://www.codewars.com/kata/54b42f9314d9229fd6000d9c/train/cpp

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <assert.h>
#include <unordered_map>

#define PB push_back
#define MP make_pair
#define F first
#define S second
#define inpToVec(v) for (auto& i : v) std::cin >> i
#define sortA(v) std::sort(v.begin(), v.end())
#define sortD(v) std::sort(v.begin(), v.end(), std::greater{})
#define prtArr(x) for (const auto& n : x) std::cout << n << " "; std::cout << "\n"
#define prtMap(m) for (const auto& [key, value] : m) std::cout << key << " " << value << "\n"
#define prt(s) std::cout << s << "\n"

std::string duplicate_encoder(const std::string& word)
{
    std::unordered_map<char, int> m;
    for (const auto& c : word)
        m[tolower(c)]++;

    std::string ans;
    for (const auto& c: word) {
        if (m[tolower(c)] == 1)
            ans.PB('(');
        else
            ans.PB(')');
    }

    return ans;
}

int main()
{
    std::string s1 = "din";
    assert(duplicate_encoder(s1) == "(((");
    prt("Test 1 passed");

    s1 = "recede";
    assert(duplicate_encoder(s1) == "()()()");
    prt("Test 2 passed");

    s1 = "Success";
    assert(duplicate_encoder(s1) == ")())())");
    prt("Test 3 passed");
    return 0;
}