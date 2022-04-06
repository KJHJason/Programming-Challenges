# https://www.codewars.com/kata/54bf1c2cd5b56cc47f0007a1/train/python

def duplicate_count(text):
    # make the string lowercase and convert it to a list
    arr = [c for c in text.lower()]
    # using the character as the key and counting the value of appearence in the string
    hm = {k:arr.count(k) for k in arr}
    # will create a list with the duplicate characters and get the length
    return len([k for k,v in hm.items() if v > 1])

print(duplicate_count("abcdeaB"))