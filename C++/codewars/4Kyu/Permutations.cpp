#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::vector<std::string> permutations(std::string s)
{
    std::vector<std::string> ans;
    std::sort(s.begin(), s.end());
    do {
        ans.push_back(s);
    } while (std::next_permutation(s.begin(), s.end()));
    return ans;
}

int main()
{
    std::vector<std::string> ans = permutations("aabb");
    std::cout << "Answers:\n";
    for (auto &s : ans) {
        std::cout << s << std::endl;
    }
    return 0;
}