# https://www.codewars.com/kata/5679aa472b8f57fb8c000047/train/python

def find_even_index(arr):
    for i in range(len(arr)):
        l = sum(arr[0:i])
        r = sum(arr[i+1:])
        if r == l:
            return i
    return -1

print(find_even_index([1,2,3,4,3,2,1]))
print(find_even_index([0,0,0,0,0]))