# https://www.codewars.com/kata/5541f58a944b85ce6d00006a/train/python

def productFib(prod):
	a, b = 0, 1
	while prod > a * b:
		a, b = b, a + b
	return [a, b, prod == a * b]

print(productFib(4895))