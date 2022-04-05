# https://www.codewars.com/kata/54a91a4883a7de5d7800009c/train/python

import re

def increment_string(strng):
    try:
        match = [re.split(r"(\d+)", x)[:-1] for x in [strng]][0]
        incremented = str(int(match[-1]) + 1)
        edited = "".join(["".join(match[:-1]), incremented])
        editedLen = len(edited)
        strngLen = len(strng)
        if editedLen != strngLen:
            zeros = strngLen - editedLen
            return "".join(["".join(match[:-1]), "0" * zeros, incremented])
        return edited
    except:
        return "".join([strng, "1"]) 

print(increment_string("foobar001"))