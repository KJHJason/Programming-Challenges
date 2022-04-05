# https://www.codewars.com/kata/51e056fe544cf36c410000fb/train/python
import re

def top_3_words(text):
    ans = []
    text = re.sub(r"\\|\?|\.|\!|\/|\;|\:|\'{2}", " ", text.lower())
    arr = [w for w in text.split(" ") if bool(w) != False and checkIfValidWord(w)]
    numOfTopVal = len(set(arr))
    if numOfTopVal > 3: numOfTopVal = 3
    for i in range(numOfTopVal):
        top = max(arr, key=arr.count)
        ans.append(top)
        arr = [w for w in arr if w != top]

    return ans

print(top_3_words("  //wont won't won't "))