# https://www.codewars.com/kata/53d40c1e2f13e331fc000c26/train/python

# normal recursive solution with dp below doesn't work for huge numbers
# existingSol = {0: 0, 1: 1}
# def fib(n):
#     if n in existingSol: return existingSol[n]
#     if n < 0:
#         if -n not in existingSol: existingSol[-n] = fib(-n)
#         existingSol[n] = int((((-1) ** (-n + 1)) *  existingSol[-n]))
#     else:
#         existingSol[n] = fib(n - 1) + fib(n - 2)
#     return existingSol[n]

# via the matrix method
from numpy import matrix
def fib(n):
    if n == 0: return 0
    return (matrix("0 1; 1 1",object) ** n)[0, 1] if n > 0 else (matrix("-1 1; 1 0",object) ** abs(n))[0, 1]

print(fib(1479048))