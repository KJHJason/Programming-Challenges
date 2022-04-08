// https://www.codewars.com/kata/5467e4d82edf8bbf40000155/train/cpp

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <cinttypes>
#include <algorithm>

#define PB push_back
#define MP make_pair
#define F first
#define S second

// write the base function here from codewars below
uint64_t descendingOrder(uint64_t a)
{
    std::stringstream ss; ss << a;
    std::string s = ss.str();
    std::sort(s.begin(), s.end(), std::greater<char>());
    return std::stoull(s);
}

int main()
{
    std::cout << descendingOrder(123456789) << "\n";
    std::cout << descendingOrder(1021) << "\n";
    return 0;
}