# https://www.codewars.com/kata/5b077ebdaf15be5c7f000077/train/python

def count_sheep(n):
    return "".join(f"{i} sheep..." for i in range(1, n + 1))

print(count_sheep(2))