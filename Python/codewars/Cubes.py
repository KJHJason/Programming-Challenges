# https://www.codewars.com/kata/5592e3bd57b64d00f3000047/train/python

def find_nb(m):
    n = 1
    while m > 0:
        m -= n ** 3
        n += 1
    return n - 1 if m == 0 else -1

print(find_nb(4183059834009) )