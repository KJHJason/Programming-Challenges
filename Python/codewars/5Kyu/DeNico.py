# https://www.codewars.com/kata/596f610441372ee0de00006e/train/python

def de_nico(key,msg):
    keyOrdNum = [k for k in key]
    keyOrder = []
    for n in keyOrdNum:
        keyOrder.append(sorted(keyOrdNum).index(n))

    keyLen = len(key)
    msgList = [msg[i:i+keyLen] for i in range(0, len(msg), keyLen)]
    
    decodedString = ""
    for line in msgList:
        for i in keyOrder:
            try: decodedString += line[i]
            except: pass
    return decodedString.rstrip()

print(de_nico("uzltnkw", "lhwzytymzyqcxhl aeilodnsychsydg grgtf")) 
print(de_nico("crazy", "cseerntiofarmit on  "))