# https://codeforces.com/contest/236/problem/A

import sys, math

def get_intl(): 
    """Returns a list of integer from stdin"""
    return list(map(int, sys.stdin.readline().strip().split()))
def get_int(): 
    """Returns an integer from stdin"""
    return int(sys.stdin.readline().strip())
def get_strl(): 
    """Returns a list of strings from stdin"""
    return sys.stdin.readline().strip().split()
def get_str(): 
    """Returns a string from stdin"""
    return sys.stdin.readline().strip()
def prt(msg=""):
    """print function using sys.stdout"""
    if (isinstance(msg, list)):
        sys.stdout.write(" ".join(map(str, msg)) + "\n")
    else:
        sys.stdout.write(str(msg) + "\n")

sys.setrecursionlimit(100000000)
MOD = 998244353

def solve():
    stra =  get_str()
    uniqueStr = {i for i in stra}
    if (len(uniqueStr) & 1):
        prt("IGNORE HIM!")
    else:
        prt("CHAT WITH HER!")

def main():
    haveTestCases = 0 # change accordingly
    testCase = 1
    if (haveTestCases):
        testCase = get_int()

    for i in range(testCase):
        solve()

main()