# https://www.codewars.com/kata/5550d638a99ddb113e0000a2/train/python

def josephus(items,k):
    arr = []
    index = 0
    while items:
        index = (index + (k - 1))%len(items)
        arr.append(items.pop(index))
    return arr

print(josephus([1,2,3,4,5,6,7],3))