# https://www.codewars.com/kata/581c06b95cfa838603000435/train/python

from bs4 import BeautifulSoup
import requests, re

URL = "https://www.codewars.com/users/leaderboard"

attrsDict = {
    "data-username": re.compile(r"[\w&.-]+")
}

class DataObject:
    def __init__(self, name, clan, honor):
        self.name = name
        self.clan = clan
        self.honor = honor

class Data():
    def __init__(self, items):
        self.position = self.format(items)
    
    @staticmethod
    def format(dataList):
        return {key: value for key, value in enumerate(dataList, 1)}

def solution():
    arr = []
    with requests.get(URL) as response:
        html = response.text
    soup = BeautifulSoup(html, "html.parser")
    for row in soup.find_all("tr", attrs=attrsDict):
        name = row.get("data-username")
        clan = row.find_all("td")[-2].text
        honor = int(row.find_all("td")[-1].text.replace(",", ""))
        data = DataObject(name, clan, honor)
        arr.append(data)
    return Data(arr)

leaderboard = solution()
print(len(leaderboard.position))

print(leaderboard.position[1].name)