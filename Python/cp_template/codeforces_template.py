# Template by KJHJason

import sys

def get_intl(): 
    """
    Get an array of integer input from stdin
    
    Returns a list of integers
    """
    return list(map(int, sys.stdin.readline().strip().split()))

def get_int(): 
    """
    Get integer input from stdin
    
    Return a integer
    """
    return int(sys.stdin.readline().strip())
    
def get_strl(): 
    """
    Get string input from stdin
    
    Returns a list of strings
    """
    return sys.stdin.readline().strip().split()

def get_str(): 
    """
    Get string input from stdin
    
    Returns a string
    """
    return sys.stdin.readline().strip()

def prt(msg=""):
    """
    print function
    """
    if (isinstance(msg, list)):
        sys.stdout.write(" ".join(map(str, msg)) + "\n")
    else:
        sys.stdout.write(str(msg) + "\n")

def solve():
    # main code here
    pass

def main():
    haveTestCases = 1 # change accordingly
    testCase = 1
    if (haveTestCases):
        testCase = get_int()

    for i in range(testCase):
        solve()

main()