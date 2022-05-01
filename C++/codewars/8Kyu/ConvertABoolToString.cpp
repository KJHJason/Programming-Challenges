// https://www.codewars.com/kata/551b4501ac0447318f0009cd/solutions/cpp

#include <iostream>
#include <string>
#include <assert.h>

std::string boolean_to_string(bool b){
    return b ? "true" : "false";
}

int main()
{
    assert(boolean_to_string(true) == "true");
    std::cout << "Test 1: boolean true converted to \"true\"\n";
    assert(boolean_to_string(false) == "false");
    std::cout << "Test 2: boolean false converted to \"false\"\n";
    return 0;
}