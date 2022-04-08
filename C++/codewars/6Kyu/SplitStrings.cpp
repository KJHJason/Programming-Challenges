// https://www.codewars.com/kata/515de9ae9dcfc28eb6000001/train/cpp

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <vector>
#include <algorithm>

#define PB push_back
#define MP make_pair
#define F first
#define S second

// write the base function here from codewars below
std::vector<std::string> solution(const std::string &s)
{
    std::vector<std::string> result;
    int sLen = s.length();
    if (sLen % 2 == 0) {
        for (int i = 0; i < sLen; i += 2) {
            result.PB(s.substr(i, 2));
        }
    } else {
        std::stringstream ss; 
        ss << s; ss << "_";
        std::string s2 = ss.str();
        for (int i = 0; i < sLen; i += 2) {
            result.PB(s2.substr(i, 2));
        }
    }

    return result;
}

int main()
{
    std::vector<std::string>ans1 = solution("HelloWorld");
    for (auto& c : ans1) {
        std::cout << c << " ";
    }
    std::cout << "\n";

    std::vector<std::string>ans2 = solution("LovePizza");
    for (auto& c : ans2) {
        std::cout << c << " ";
    }
    std::cout << "\n";
    return 0;
}