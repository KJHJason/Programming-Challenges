# https://www.codewars.com/kata/5266876b8f4bf2da9b000362/train/python

# main solution
def likes(names):
    numOfNames = len(names)
    if numOfNames == 0:
        return "no one likes this"
    elif numOfNames == 1:
        return "{} likes this".format(names[0])
    elif numOfNames == 2:
        return "{} and {} like this".format(names[0], names[1])
    elif numOfNames == 3:
        return "{}, {} and {} like this".format(names[0], names[1], names[2])
    else:
        return "{}, {} and {} others like this".format(names[0], names[1], numOfNames-2)

print("Main Solution Ans:")
print(likes(["Alex"]))
print(likes(['Alex', 'John']))
print(likes(['Alex', 'John', 'Mark']))
print(likes(['Alex', 'John', 'Mark', 'Max']))

# old solution which is harder to read
def oldLikes(names):
    s = ""
    numOfNames = len(names)
    if numOfNames == 0:
        return "no one likes this"
    elif numOfNames <= 3:
        s += names[0]
        if numOfNames > 1:
            for i, name in enumerate(names[1:], 2):
                if i == numOfNames:
                    s += f" and {name}"
                else:
                    s += f", {name}"
        return "".join([s, " likes this"]) if numOfNames == 1 else "".join([s, " like this"])
    else:
        return f"{names[0]}, {names[1]} and {numOfNames-2} others like this"

print("\nOld Solution Ans:")
print(oldLikes(["Alex"]))
print(oldLikes(['Alex', 'John']))
print(oldLikes(['Alex', 'John', 'Mark']))
print(oldLikes(['Alex', 'John', 'Mark', 'Max']))