// https://www.codewars.com/kata/5287e858c6b5a9678200083c/train/cpp

using namespace std;
#define br "\n";
#include<math.h>
#include <vector>
#include <iostream>

bool narcissistic( int value ){
	string s = to_string(value);
	int sLen = s.length();
	int sum = 0;
	// make a loop in the int value
	for(int i = 0; i < sLen; i++){
		// get the digit
		int digit = s[i] - '0';
		// add the digit to the sum
		sum += pow(digit, sLen);
	}
	// return true if the sum is equal to the value
	return sum == value;
}

int main(){
	bool ans = narcissistic( 122 );
	cout << ans;
	return 0;
}