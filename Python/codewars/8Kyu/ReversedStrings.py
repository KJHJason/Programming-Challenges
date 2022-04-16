# https://www.codewars.com/kata/5168bb5dfe9a00b126000018/train/python
def solution(string):
    return "".join([c for c in reversed(string)]) # or string[::-1]