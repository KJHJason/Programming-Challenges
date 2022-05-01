# https://www.codewars.com/kata/51c8991dee245d7ddf00000e/train/python

def reverse_words(s):
    return " ".join(reversed(s.split(" ")))

print(reverse_words("The quick brown fox jumps over the lazy dog."))