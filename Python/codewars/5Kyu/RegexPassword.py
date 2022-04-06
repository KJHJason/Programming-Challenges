# https://www.codewars.com/kata/52e1476c8147a7547a000811/train/python

from re import search
regex = "^(?=.*?[A-Z])(?=.*?[a-z])(?=.*?[0-9])[a-zA-Z0-9]{6,}$"

print(bool(search(regex, '4fdg5Fj3')))