// https://www.codewars.com/kata/554b4ac871d6813a03000035/train/cpp

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

std::vector<int> split (const std::string &s, char delim) {
    std::vector<int> result;
    std::stringstream ss(s);
    std::string item;

    while (std::getline(ss, item, delim)) {
        result.PB(std::stoi(item));
    }

    return result;
}

std::string highAndLow(const std::string& numbers){
    std::vector<int> nums(numbers.length());
    nums = split(numbers, ' ');
    // int max = *max_element(nums.begin(), nums.end());
    // int min = *min_element(nums.begin(), nums.end());
    std::sort(nums.begin(), nums.end());
    int max{nums[nums.size() - 1]};
    int min{nums[0]};
    std::stringstream ss; ss << max << " " << min;
    return ss.str();
}

int main()
{
    std::string numbers = "8 3 -5 42 -1 0 0 -9 4 7 4 -4";
    std::cout << highAndLow(numbers) << "\n";
    return 0;
}