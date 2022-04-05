# https://www.codewars.com/kata/52597aa56021e91c93000cb0/train/python
def move_zeros(array):
    arr = [x for x in array if x > 0]
    for i in range(len(arr), len(array)): arr.append(0)
    return arr

# print(move_zeros([1, 2, 0, 1, 0, 1, 0, 3, 0, 1]))