// https://www.codewars.com/kata/5541f58a944b85ce6d00006a/train/cpp

#include <iostream>
#include <vector>
typedef unsigned long long ull;

class ProdFib
{
public:
    static std::vector<ull> productFib(ull prod);
};

std::vector<ull> ProdFib::productFib(ull prod)
{
    ull a = 0, b = 1;
    while (prod > a * b)
    {
        ull c = a + b;
        a = b;
        b = c;
    }
    return {a, b, a * b == prod};
}

int main() {
    std::vector<ull> ans = ProdFib::productFib(4895);
    for (int i = 0; i < ans.size(); i++)
    {
        std::cout << ans[i] << " ";
    }
    return 0;
}