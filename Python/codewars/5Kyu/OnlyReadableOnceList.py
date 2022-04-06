# https://www.codewars.com/kata/53f17f5b59c3fcd589000390/train/python

class SecureList():
    def __init__(self, alist):
        self.alist = alist.copy()
    
    def __getitem__(self, key):
        retrieved = self.alist.pop(self.alist.index(self.alist[key]))
        return retrieved
    
    def __str__(self):
        returnedList = self.alist.copy()
        self.alist = []
        return str(returnedList)
    
    def __repr__(self):
        returnedList = self.alist.copy()
        self.alist = []
        return str(returnedList)
    
    def __len__(self):
        num = len(self.alist)
        self.alist = []
        return num
    
messages=SecureList([1,2,3,4])
print(messages[0])
print(messages[0])
print("my messages are: %r."%messages)