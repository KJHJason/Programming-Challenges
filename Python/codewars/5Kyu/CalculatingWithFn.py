# https://www.codewars.com/kata/525f3eda17c7cd9f9e000b39/train/python

def zero(*num): return eval(f"0 {num[0][0]} {num[0][1]}") if num else 0
def one(*num): return eval(f"1 {num[0][0]} {num[0][1]}") if num else 1
def two(*num): return eval(f"2 {num[0][0]} {num[0][1]}") if num else 2
def three(*num): return eval(f"3 {num[0][0]} {num[0][1]}") if num else 3
def four(*num): return eval(f"4 {num[0][0]} {num[0][1]}") if num else 4
def five(*num): return eval(f"5 {num[0][0]} {num[0][1]}") if num else 5
def six(*num): return eval(f"6 {num[0][0]} {num[0][1]}") if num else 6
def seven(*num): return eval(f"7 {num[0][0]} {num[0][1]}") if num else 7
def eight(*num): return eval(f"8 {num[0][0]} {num[0][1]}") if num else 8
def nine(*num): return eval(f"9 {num[0][0]} {num[0][1]}") if num else 9

def plus(num): return "+", num 
def minus(num): return "-", num
def times(num): return "*", num
def divided_by(num): return "//", num
    
print(seven(times(five())))