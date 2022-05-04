// https://www.codewars.com/kata/51c8991dee245d7ddf00000e/train/cpp

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <vector>
#include <algorithm>

#define PB push_back
#define MP make_pair
#define F first
#define S second
#define inpToVec(v) for (auto& i : v) std::cin >> i
#define sortA(v) std::sort(v.begin(), v.end())
#define sortD(v) std::sort(v.begin(), v.end(), std::greater{})
#define prtArr(x) for (const auto& n : x) std::cout << n << " "; std::cout << "\n"
#define prtMap(m) for (const auto& [key, value] : m) std::cout << key << " " << value << "\n"

typedef unsigned long int uli;
std::string reverse_words_method_1(const std::string& str) {
    // reverse order of words in a sentence
    std::vector<std::string> words;

    std::string word;
    for (uli i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            word += str[i];
        } 
        else {
            words.PB(word);
            word = "";
        }
    }

    // for the last word
    if (word != "") 
        words.PB(word);

    std::reverse(words.begin(), words.end());
    std::string result;
    for (const auto& word : words)
        result += word + " ";

    result.pop_back(); // remove whitespace at the back
    return result;
}

std::string reverse_words_method_2(const std::string& str) {
    // reverse order of words in a sentence
    std::string sentence; std::string word;
    std::stringstream ss(str);
    while (ss >> word) 
        sentence = word + ' ' + sentence;

    sentence.pop_back(); // remove whitespace at the back
    return sentence;
}

int main()
{
    std::cout << "Enter a sentence to reverse: ";
    std::string str; std::getline(std::cin, str);
    std::cout << "\n";

    std::cout << "Method 1: \"" << reverse_words_method_1(str) << "\"\n";
    std::cout << "Method 2: \"" << reverse_words_method_2(str) << "\"\n";

    return 0;
}