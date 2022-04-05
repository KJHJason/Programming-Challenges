# https://www.codewars.com/kata/5552101f47fc5178b1000050/train/python

def dig_pow(n, p):
    total = 0
    for i, num in enumerate(str(n)):
        total += int(num)**(p+i)
    
    k = int(total/n)
    return k if (n*k) == total else -1

print(dig_pow(46288, 3))