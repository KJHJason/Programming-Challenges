# https://www.codewars.com/kata/546f922b54af40e1e90001da/train/python

# using a predefined array
def alphabet_position(text):
    alphabetsArr = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
    return " ".join([str(alphabetsArr.index(x)+1) for x in text.lower() if x in alphabetsArr])

# using ord function
def alphabet_position(text):
    return " ".join([str(ord(x) - 96) for x in text.lower() if x.isalpha()])

print(alphabet_position("The sunset sets at twelve o' clock."))