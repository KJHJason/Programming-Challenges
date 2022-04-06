# https://www.codewars.com/kata/56541980fa08ab47a0000040/train/python

def printer_error(s):
    return "{}/{}".format(len([x for x in s if x > "m"]), len(s))

print(printer_error("z"))