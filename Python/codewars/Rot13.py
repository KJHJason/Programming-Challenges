# https://www.codewars.com/kata/530e15517bc88ac656000716/train/python

def rot13(message):
    decodedString = ""
    for char in message:
        if char.isalpha():
            upperCaseCon = False
            if char.isupper():
                char = char.lower()
                upperCaseCon = True

            decodedChar = chr((((ord(char) -97) + 13) % 26) + 97)
            if upperCaseCon: decodedChar = decodedChar.upper()
            
            decodedString += decodedChar
        else:
            decodedString += char
    return decodedString

print(rot13("Test"))