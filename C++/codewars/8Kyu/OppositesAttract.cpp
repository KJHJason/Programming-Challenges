// https://www.codewars.com/kata/555086d53eac039a2a000083/train/cpp

#include <iostream>
#include <assert.h>

#define prt(s) std::cout << s << "\n"

bool lovefunc(int f1, int f2) {
    // if first flower is odd, checks if second flower is even and vice versa
    // return (f1 & 1) ? (!(f2 & 1)) : (f2 & 1); 
    // or
    // if sum of flowers is odd, return true as odd no + even no = odd no
    return (f1 + f2) % 2; 
}

int main()
{
    int flower1{1}, flower2{2};
    assert(lovefunc(flower1, flower2) == true);
    prt("Test 1 passed");

    flower1 = 2;
    flower2 = 1;
    assert(lovefunc(flower1, flower2) == true);
    prt("Test 2 passed");

    flower1 = flower2 = 101;
    assert(lovefunc(flower1, flower2) == false);
    prt("Test 3 passed");
    return 0;
}