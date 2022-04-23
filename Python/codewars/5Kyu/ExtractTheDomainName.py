# https://www.codewars.com/kata/514a024011ea4fb54200004b/train/python
import re

regex = re.compile(r"^(http(s)?)?(:\/\/)?(www.)?([\w\d]+)")
def domain_name(url):
    return regex.search(url).group(5)

print(domain_name("http://google.co.jp"))