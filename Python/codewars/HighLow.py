# https://www.codewars.com/kata/554b4ac871d6813a03000035/train/python

def high_and_low(numbers):
    numList = [int(x) for x in numbers.split(" ")]
    return "{} {}".format(max(numList), min(numList))