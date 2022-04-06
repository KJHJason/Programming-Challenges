# https://www.codewars.com/kata/54b42f9314d9229fd6000d9c/train/python

def duplicate_encode(word):
    arrOfLetters = [x.lower() for x in word]

    # Create a dictionary with the letters as keys and the number of times they appear as values
    dictOfLetters = {}
    for letter in arrOfLetters:
        if letter in dictOfLetters:
            dictOfLetters[letter] += 1
        else:
            dictOfLetters[letter] = 1

    # Create a string to hold the encoded word
    encodedWord = ""
    for letter in arrOfLetters:
        if dictOfLetters[letter] > 1:
            encodedWord += ")"
        else:
            encodedWord += "("
    return encodedWord

print(duplicate_encode("recede"))