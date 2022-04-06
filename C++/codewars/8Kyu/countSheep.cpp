// https://www.codewars.com/kata/5b077ebdaf15be5c7f000077/train/cpp

#include <iostream>
#include <string>

// iterative method
std::string countSheep(int number) {
    std::string sheep = "";
    for (int i = 1; i <= number; i++) {
        sheep += std::to_string(i) + " sheep...";
    }
    return sheep;
}

// recursive method
std::string countSheep(int number) {
    return number ? countSheep(number - 1) + std::to_string(number) + " sheep..." : "";
}

int main() {
    std::cout << countSheep(1);
}