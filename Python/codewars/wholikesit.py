# https://www.codewars.com/kata/5266876b8f4bf2da9b000362/train/python

def likes(names):
    s = ""
    nameNum = len(names)
    if nameNum == 0:
        return "no one likes this"
    elif nameNum <= 3:
        s += names[0]
        if nameNum > 1:
            for i, name in enumerate(names[1:], 2):
                if i == nameNum:
                    s += f" and {name}"
                else:
                    s += f", {name}"
        return "".join([s, " likes this"]) if nameNum == 1 else "".join([s, " like this"])
    else:
        return f"{names[0]}, {names[1]} and {nameNum-2} others like this"
    
print(likes(['Max', 'John', 'Mark']))