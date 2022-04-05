// https://www.codewars.com/kata/541c8630095125aba6000c00/train/cpp

#include <math.h>
#include <iostream>
using namespace std;

int digital_root(int n) {
    if (n < 10) {
        return n;
    }
    string s = to_string(n);
    int sum = 0;
    for (int i = 0; i < s.length(); i++) {
        sum += (s[i] - '0');
    }
    return digital_root(sum);
}

int main() {
    int num;
    cin >> num;
    cout << digital_root(num);
    return 0;
}