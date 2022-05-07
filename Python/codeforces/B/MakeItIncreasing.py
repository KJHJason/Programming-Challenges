# https://codeforces.com/contest/1675/problem/B

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
def prtY():
    """print "YES" using sys.stdout"""
    sys.stdout.write("YES\n")
def prtN():
    """print "NO" using sys.stdout"""
    sys.stdout.write("NO\n")
def prtYN(cond):
    """print "YES" or "NO" using sys.stdout
    
    args: 
    - cond (bool): if true, print "YES", else print "NO"
    """
    if (cond):
        prtY()
    else:
        prtN()

sys.setrecursionlimit(100000000)
MOD = 998244353

def check_if_increasing(arr):
    for i in range(len(arr)-1):
        if (arr[i] >= arr[i+1]):
            return False
    return True

def solve():
    n = get_int()
    arr = get_intl()
    if (n == 1 or check_if_increasing(arr)):
        prt(0)
        return
    
    ans = 0
    temp = arr[n-1]
    for i in range(n-2, -1, -1):
        if (arr[i] < temp):
            temp = arr[i]
        else:
            while (temp <= arr[i] and temp != 0):
                ans += 1
                arr[i] = arr[i] >> 1
            temp = arr[i]
            
    if (check_if_increasing(arr)):
        prt(ans)
    else:
        prt(-1)

def main():
    haveTestCases = 1 # change accordingly
    testCase = 1
    if (haveTestCases):
        testCase = get_int()

    for i in range(testCase):
        solve()

main()