// https://www.codewars.com/kata/513e08acc600c94f01000001/train/cpp

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

class RGBToHex
{
    public:
    static std::string rgb(int r, int g, int b);
};

std::string calculateRGBToHex(int rgbInt)
{
    if (rgbInt >= 0 && rgbInt <= 255) {
        int firstNum = std::floor(rgbInt / 16);
        int secondNum = rgbInt % 16;
        std::stringstream ss;
        ss << std::uppercase << std::hex << firstNum << secondNum;
        return ss.str();
    } 
    else if (rgbInt < 0) return "00";
    else return "FF";
}

std::string RGBToHex::rgb (int r, int g, int b)
{
    std::string hex;
    hex = calculateRGBToHex(r) + calculateRGBToHex(g) + calculateRGBToHex(b);
    return hex;
}

int main()
{
    // basic test cases
    std::cout << RGBToHex::rgb(0, 0, 0) << std::endl;
    std::cout << RGBToHex::rgb(255, 255, 255) << std::endl;
    std::cout << RGBToHex::rgb(0, 0, 255) << std::endl;
    std::cout << RGBToHex::rgb(-20, 275, 125) << std::endl;
    return 0;
}
