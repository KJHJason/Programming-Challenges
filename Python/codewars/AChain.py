# https://www.codewars.com/kata/539a0e4d85e3425cb0000a88/train/python

class ChainAdd(int):
    def __call__(self, n):
        return ChainAdd(self + n)
    
def add(n):
    return ChainAdd(n)

print(add(2)(3)(4))