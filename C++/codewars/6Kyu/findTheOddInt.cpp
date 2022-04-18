// https://www.codewars.com/kata/54da5a58ea159efa38000836/train/cpp

#include <iostream>
#include <vector>
#include <unordered_map>

int findOdd(const std::vector<int>& numbers)
{
    std::unordered_map<int, int> m;
    for (const auto& c : numbers) {
        if (m.find(c) == m.end()) m[c] = 1;
        else m[c]++;
    }
    for (const auto& k : m) {
        if (k.second % 2 != 0) return k.first;
    }
    return -1; // return -1 if there is no odd number of apperance found
}

int main()
{
    std::vector<int> v = {1,1,2,2,2,3,3};
    std::cout << findOdd(v) << "\n";
}