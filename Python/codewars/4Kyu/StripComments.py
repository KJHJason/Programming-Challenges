# https://www.codewars.com/kata/51c8e37cee245da6b40000bd/train/python

def solution(string,markers):
    if not string: return ""
    lines = string.splitlines()
    for i, line in enumerate(lines):
        for marker in markers:
            if marker in line:
                line = line.split(marker)[0]
        lines[i] = line.rstrip()
    return "\n".join(lines)

print(solution("a #b\nc\nd $e f g", ["#", "$"]))