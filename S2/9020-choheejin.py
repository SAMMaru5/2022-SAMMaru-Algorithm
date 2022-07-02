import sys

def is_prime(a):
    for i in range(2, int(pow(a, 0.5)) + 1):
        if a % i == 0:
            return False
    if a == 1:
        return False
    return True


N = int(sys.stdin.readline())

for i in range(N):
  num = int(sys.stdin.readline())
  for i in range(num // 2, 0, -1):
    if is_prime(i) and is_prime(num - i):
      print(i, num - i)
      break

# 이건 소수 찾은 다음은 어떻게 하는 지 모르겠어서 인터넷 참고하여 풀었습니다.
 
