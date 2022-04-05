// https://www.codewars.com/kata/546e2562b03326a88e000020/train/cpp

#include <math.h>
#include <iostream>
using namespace std;

int square_digits(int num) {
  string s = to_string(num);
  string ans = "";
  for (int i = 0; i < s.length(); i++) {
    int squared = pow(s[i] - '0', 2);
    ans += to_string(squared);
  }
  return stoi(ans);
}

int main() {
    int num;
    cin >> num;
    cout << square_digits(num);
    return 0;
}