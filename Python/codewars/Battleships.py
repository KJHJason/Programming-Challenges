# https://www.codewars.com/kata/58d06bfbc43d20767e000074/train/python

def damaged_or_sunk (board, attacks):
    shipDict = {}
    for y in board:
        for x in y:
            if x > 0:
                if x in shipDict:
                    shipDict[x] += 1
                else:
                    shipDict[x] = 1
    yHeight = len(board)

    # print(shipDict)
    attackedDict = {k: 0 for k in shipDict}
    for attack in attacks:
        x = attack[0]
        y = attack[1]
        # print("original", y, "transformed y", abs((y-yHeight)))
        boardNum = board[abs((y-yHeight))][x-1]
        if boardNum > 0:
            attackedDict[boardNum] += 1
    
    infoDict = {"sunk": 0, "damaged": 0, "not_touched": 0, "points": 0}
    # print(attackedDict)
    for k, v in shipDict.items():
        # print("original:", v, "attacked:", attackedDict[k])
        if v == attackedDict[k]:
            infoDict["sunk"] += 1
            infoDict["points"] += 1
        elif v > attackedDict[k] and attackedDict[k] != 0:
            infoDict["damaged"] += 1
            infoDict["points"] += 0.5
        else:
            infoDict["not_touched"] += 1
                
    return infoDict

board = [ [3, 0, 1],
          [3, 0, 1],
          [0, 2, 1], 
          [0, 2, 0] ]

attacks = [[2, 1], [2, 2], [ 3, 2], [3, 3]]

result = damaged_or_sunk(board, attacks)
print(result["sunk"])
print(result["damaged"])
print(result["not_touched"])
print(result["points"])