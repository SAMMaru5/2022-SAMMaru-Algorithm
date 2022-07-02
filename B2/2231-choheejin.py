import sys

N = sys.stdin.readline()
S = 0

result = 0

for i in range(int(N) - 9*len(N), int(N)+1, 1):
  rng = len(str(i))  
  num = i
  M = 0

  for x in range(1, rng+1, 1):
    S = num //10**(rng-x)
    M += S * 10**(rng-x) + S
    num = num % (10**(rng-x))

  if(M == int(N)):
    result = i
    break
 
if(result < 0):
  print(0)
else:
  print(result)
