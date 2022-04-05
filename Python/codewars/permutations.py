# https://www.codewars.com/kata/5254ca2719453dcc0b00027d/train/python

import itertools

# method 1
def permutations(string):
    return list({"".join(list(n)) for n in list(itertools.permutations(string))})

# method 2
def permutations(string):
    return list("".join(p) for p in set(itertools.permutations(string)))

print(permutations("aabb"))