// https://www.codewars.com/kata/525f50e3b73515a6db000b83/train/cpp

#include <iostream>
#include <string>

std::string createPhoneNumber(const int arr [10]){
    std::string phoneNumber = "(";
    for (int i = 0; i < 3; i++) {
        phoneNumber += std::to_string(arr[i]);
    }
    phoneNumber += ") ";
    for (int i = 3; i < 6; i++) {
        phoneNumber += std::to_string(arr[i]);
    }
    phoneNumber += "-";
    for (int i = 6; i < 10; i++) {
        phoneNumber += std::to_string(arr[i]);
    }
    return phoneNumber;
}

int main() {
    int arr[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    std::cout << createPhoneNumber(arr);
}