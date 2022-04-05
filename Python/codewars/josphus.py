# https://www.codewars.com/kata/5550d638a99ddb113e0000a2/train/python
def josephus(items,k):
    arr = []
    index = 0
    while items:
        index = (index + (k - 1))%len(items)
        arr.append(items.pop(index))
    return arr

# https://www.codewars.com/kata/555624b601231dc7a400017a/train/python
def josephus_survivor(n,k):
    popped = index = 0
    nArr = [i for i in range(1, n+1)]
    while nArr:
        index = (index + (k - 1))%len(nArr)
        popped = nArr.pop(index)
    return popped

print(josephus_survivor(1,300))
print(josephus([1],300))