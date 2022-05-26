import sys

N1 = int(sys.stdin.readline())
N2 = int(sys.stdin.readline())
N3 = int(sys.stdin.readline())
result = N1 * N2 * N3
result2str = str(result)

zip = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']

for i in zip:
  print(result2str.count(i))
