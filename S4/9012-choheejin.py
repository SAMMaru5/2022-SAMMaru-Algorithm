import sys

N = int(sys.stdin.readline())

result = []

for i in range(0, N, 1):
  left = []
  flag = 0
  VPS = sys.stdin.readline().strip() # 개행제거 .strip()
  for element in VPS:
    if(element == '('):
      left.append(element)
    if(element == ')'):
      if(len(left) == 0):
        flag = 1
        break
      else:
        left.pop()

  if(len(left) == 0 and flag==0):
    result.append("YES")
  else:
    result.append("NO")

for i in result:
  print(i)
