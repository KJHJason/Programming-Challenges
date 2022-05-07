// https://www.codewars.com/kata/53d40c1e2f13e331fc000c26/train
// Attempted The Millionth Fibonacci Kata in C++
// Note that for this C++ program, it cannot accept a number too large as its input due to 
// the large number calculated during the matrix multiplication (n <= 2^64/64 bits)
// Another note, I calculate the fibonacci number modulo 1073741824 as its answer
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <assert.h>
#include <stdint.h>

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

typedef std::int_fast32_t fi32;
typedef std::int_fast64_t fi64;
typedef std::uint_fast32_t ui32;
typedef std::vector<fi64> vec;
typedef std::vector<vec> matrix;
const fi64 MOD {1073741824};

// code from https://stackoverflow.com/questions/60828766/simple-matrix-exponentiation-in-c
matrix multip(const matrix& A, const matrix& B) {
    int n {2};
    matrix result(n, vec(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                result[i][j] += (A[i][k] * B[k][j]);
            }
        }
    }
    return result;
}

matrix expo(matrix const& M, uint_fast32_t n) {
    if (n == 1)
        return M;
    return multip(M, expo(M, n - 1));
}

// for debugging purposes
void prt2DArr(matrix& arr) {
    for (const auto& row : arr) {
        for (const auto& n : row) {
            std::cout << n << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
}

fi32 fib(fi32 n)
{
    if (n == 0)
        return 0;

    matrix m(2, vec(2));
    if (n >= 0) {
        m[0][0] = 0, m[0][1] = 1;
        m[1][0] = 1, m[1][1] = 1;
    }
    else {
        m[0][0] = -1, m[0][1] = 1;
        m[1][0] = 1, m[1][1] = 0;
    }

    m = expo(m, abs(n));
    // prt(m[0][1] % MOD);
    return m[0][1] % MOD;
}

int main()
{
    // testing fib function
    fi32 testNum {15};
    assert(fib(testNum) == 610);
    prt("Test 1 passed");

    testNum = 100;
    assert(fib(testNum) == 93634499);
    prt("Test 2 passed");

    // testing large numbers
    testNum = 901;
    assert(fib(testNum) == 832338105);
    prt("Test 4 passed");

    testNum = 5000;
    assert(fib(testNum) == 301226773);
    prt("Test 5 passed");

    testNum = 9999;
    assert(fib(testNum) == 890489442);
    prt("Test 6 passed");

    // testing negative numbers
    testNum = -73;
    assert(fib(testNum) == 131755569);
    prt("Test 7 passed");

    testNum = -96;
    assert(fib(testNum) == 365489024);
    prt("Test 8 passed");

    return 0;
}