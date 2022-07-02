import sys
from collections import deque

queue = deque()

N = int(sys.stdin.readline())

for i in range(0, N, 1):
  queue.append(i+1)

while True:
  if(len(queue) == 1):
    break
  queue.popleft()
  queue.insert(len(queue), queue[0])
  queue.popleft()
    
print(queue[0])

# 런타임 에러(IndexError)가 났었다.
# queue의 사이즈가 1일때 break 해주는 명령어를 popleft 후에 해줬기에 입력이 1일때 에러가 났었다.
