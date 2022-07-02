import sys
from collections import deque

# 처음엔 pop 함수를 이용하여 문제를 해결하였으나, 시간초과가 나와 헤맸습니다.
# https://tturbo0824.tistory.com/37
# 해당 링크를 통해, deque 를 이용한 popleft() 함수를 알게 되었고, 이를 통해 문제를 해결하였습니다.
# pop(0)을 사용하게 될 시, O(N^2)의 시간 복잡도가 나와 시간초과가 되는듯 보입니다.

queue = deque()

N = int(sys.stdin.readline())

for i in range(0, N, 1):
  op = sys.stdin.readline().split()
  if(op[0] == "push"):
    queue.append(op[1])
  if(op[0] == "pop"):
    print(queue.popleft() if len(queue) !=0 else "-1")
  if(op[0] == "front"):
    print(queue[0] if len(queue) !=0 else "-1")
  if(op[0] == "back"):
    print(queue[-1] if len(queue) !=0 else "-1")
  if(op[0] == "size"):
    print(len(queue))
  if(op[0] == "empty"):
    print("1" if len(queue)==0 else "0")

