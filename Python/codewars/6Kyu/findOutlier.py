# https://www.codewars.com/kata/5526fc09a1bbd946250002dc/train/python

def find_outlier(integers):
    even = [i for i in integers if i % 2 == 0]
    odd = [i for i in integers if i % 2 != 0]
    return odd[0] if len(even) > len(odd) else even[0]

print(find_outlier([2, 4, 6, 8, 10, 3]))