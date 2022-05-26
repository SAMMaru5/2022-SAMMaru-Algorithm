import sys

list = []
N = sys.stdin.readline()
input = map(int, sys.stdin.readline().split())

result = sorted(input)
cnt = len(result) - 1
print(result[0], result[cnt])
