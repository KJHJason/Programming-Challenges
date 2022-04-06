# https://www.codewars.com/kata/56f1c6034d0c330e4a001059/train/python

import random
def generate_color_rgb():
    return "#" + "".join([random.choice("0123456789abcdef") for x in range(6)])

print(generate_color_rgb())