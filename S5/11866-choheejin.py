import sys
from collections import deque

queue = deque()
result = []
flag = 1
x = 1

N, K = map(int, sys.stdin.readline().split())

for i in range(1, N+1, 1):
  queue.append(i)

while True:
  if len(queue) == 0:
    break
  
  if flag == K:
    result.append(queue[0])
    queue.popleft()
    flag = 1
  else: 
    queue.insert(len(queue), queue.popleft())
    flag += 1
  
print("<", end="")
for i in result:
  print(i, end="")
  if(x == N):
    print(">")
  else:
    print(",", end=" ")
  x += 1

# 1 1 때를 고려하지 않고 코드를 작성하여 중간에 오류가 났었습니다.
