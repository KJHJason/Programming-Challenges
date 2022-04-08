// https://www.codewars.com/kata/53697be005f803751e0015aa/train/cpp

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <map>

#define PB push_back
#define MP make_pair
#define F first
#define S second

const std::map<char, int> vowelMap = {
    {'a', 1}, {'e', 2}, {'i', 3}, {'o', 4}, {'u', 5}
};

// write the base function here from codewars below
std::string encode(const std::string &str) {
    std::string result;
    for (int i = 0; i < str.length(); i++) {
        std::string c = str.substr(i, 1);
        auto it = vowelMap.find(tolower(*c.c_str()));
        if (it != vowelMap.end()) result += std::to_string(it->second);
        else result += c;
    }
    return result;
}

std::string decode(const std::string &str) {
    std::string result;
    for (int i = 0; i < str.length(); i++) {
        std::string c = str.substr(i, 1);
        if (std::isdigit(*c.c_str())) {
            int num = std::stoi(c);
            for (auto& it : vowelMap) {
                if (it.second == num) {
                    result += it.first;
                    break;
                }
            }
        } else result += c;
    }
    return result;
}

int main()
{
    std::cout << encode("This is an encoding test.") << "\n";
    std::cout << decode("Th3s 3s 1n 2nc4d3ng t2st.") << "\n";
    return 0;
}