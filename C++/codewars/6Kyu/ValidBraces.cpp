// https://www.codewars.com/kata/5277c8a221e209d3f6000b56/train/cpp

#include <iostream>
#include <string>
#include <stack>

#define PB push_back
#define MP make_pair
#define F first
#define S second

bool valid_braces(std::string braces) 
{
    std::stack<char> s;

    for (auto &c: braces) {
        switch(c) {
            case '(':
            case '[':
            case '{':
                s.push(c);
                break;
            case ')':
                if (s.empty() || s.top() != '(') return false;
                s.pop();
                break;
            case ']':
                if (s.empty() || s.top() != '[') return false;
                s.pop();
                break;
            case '}':
                if (s.empty() || s.top() != '{') return false;
                s.pop();
                break;
        }
    }
    return s.empty();
}

int main()
{
    std::cout << valid_braces("()") << "\n";
    std::cout << valid_braces("[(])") << "\n";
    return 0;
}