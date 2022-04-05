# https://www.codewars.com/kata/54e6533c92449cc251001667/train/python

def unique_in_order(iterable):
    if type(iterable) is str:
        iterable = [x for x in iterable]
    
    iToRemove = []
    for i in range(len(iterable)-1):
        if iterable[i] == iterable[i+1]:
            iToRemove.append(i)
            
    for i in reversed(iToRemove):
        iterable.pop(i)
    
    return iterable

print(unique_in_order('AAAABBBCCDAABBB'))