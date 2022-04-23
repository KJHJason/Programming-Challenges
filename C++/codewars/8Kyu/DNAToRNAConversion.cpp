// https://www.codewars.com/kata/5556282156230d0e5e000089/train/cpp

#include <iostream>
#include <string>

#define PB push_back
#define MP make_pair
#define F first
#define S second

std::string DNAtoRNA(std::string dna){
    for (auto &c : dna) {
        if (c == 'T') c = 'U';
    }
    // or simply std::replace(dna.begin(), dna.end(), 'T', 'U');
    return dna;
}

int main()
{
    std::string dna = "GCAT";
    std::cout << DNAtoRNA(dna) << "\n"; // should return "GCAU"
    return 0;
}