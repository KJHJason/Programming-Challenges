class ChainAdd(int):
    def __call__(self, n):
        return ChainAdd(self + n)
    
def add(n):
    return ChainAdd(n)

print(add(2)(3)(4))