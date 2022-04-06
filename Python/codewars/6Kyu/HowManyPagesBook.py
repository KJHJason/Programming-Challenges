# https://www.codewars.com/kata/622de76d28bf330057cd6af8/train/python

def amount_of_pages(summary):
    digi = ""
    counter = 0
    while True:
        counter += 1
        digi += str(counter)
        if len(digi) == summary:
            return counter

print(amount_of_pages(5))