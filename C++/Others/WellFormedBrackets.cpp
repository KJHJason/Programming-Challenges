// From Daily Coding Problem: Problem #27 [Easy]
// Good morning! Here's your coding interview problem for today.
//
// This problem was asked by Facebook.
//
// Given a string of round, curly, and square open and closing brackets,
// return whether the brackets are balanced (well-formed).
//
// For example, given the string "([])[]({})", you should return true.
//
// Given the string "([)]" or "((()", you should return false.
//
// Note that this is similar to Codewars's Valid Braces problem 
// https://www.codewars.com/kata/5277c8a221e209d3f6000b56/train/cpp
//

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <assert.h>
#include <stack>

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

bool solve(const std::string& s)
{
    std::stack<char> stack;
    for (const auto& c : s) {
        if (c == '(' || c == '[' || c == '{') {
            stack.push(c);
        }
        else if (c == ')') {
            if (stack.empty() || stack.top() != '(') 
                return 0;
            stack.pop();
        }
        else if (c == ']') {
            if (stack.empty() || stack.top() != '[')
                return 0;
            stack.pop();
        }
        else if (c == '}') {
            if (stack.empty() || stack.top() != '{') 
                return 0;
            stack.pop();
        }
    }
    return stack.empty();
}

int main()
{
    std::string s = "([])[]({})";
    prt("Test 1: " + s);
    assert(solve(s) == true);
    prt("Test 1 passed\n");

    s = "([)]";
    prt("Test 2: " + s);
    assert(solve(s) == false);
    prt("Test 2 passed\n");

    s = "((()";
    prt("Test 3: " + s);
    assert(solve(s) == false);
    prt("Test 3 passed\n");

    s = "({})";
    prt("Test 4: " + s);
    assert(solve(s) == true);   
    prt("Test 4 passed\n");

    return 0;
}