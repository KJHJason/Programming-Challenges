# https://www.codewars.com/kata/52685f7382004e774f0001f7/train/python

def add_zero(n):
    return n if n >= 10 else f"0{n}"

def make_readable(seconds):
    hours = seconds//3600
    mins = (seconds - (hours * 3600))//60
    seconds = seconds - (hours * 3600) - (mins * 60)
    return "{}:{}:{}".format(add_zero(hours), add_zero(mins), add_zero(seconds))

print(make_readable(5))