// https://www.codewars.com/kata/514b92a657cdc65150000006/train/cpp

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <assert.h>

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

int solution(int number) 
{
    int sum{};
    for (int i = 3; i < number; ++i)
        if (i % 3 == 0 || i % 5 == 0)
            sum += i;
    return sum;
}

int main()
{
    int inp{10};
    prt("Input: " + std::to_string(inp));
    prt("Output: " + std::to_string(solution(inp)));
    assert(solution(inp) == 23);
    prt("Test 1 passed\n");

    inp = 1000;
    prt("Input: " + std::to_string(inp));
    prt("Output: " + std::to_string(solution(inp)));
    assert(solution(inp) == 233168);
    prt("Test 2 passed\n");

    inp = -1;
    prt("Input: " + std::to_string(inp));
    prt("Output: " + std::to_string(solution(inp)));
    assert(solution(inp) == 0);
    prt("Test 3 passed\n");

    inp = 3;
    prt("Input: " + std::to_string(inp));
    prt("Output: " + std::to_string(solution(inp)));
    assert(solution(inp) == 0);
    prt("Test 4 passed");

    return 0;
}