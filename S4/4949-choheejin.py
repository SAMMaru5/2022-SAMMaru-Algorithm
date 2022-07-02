import sys

sentences = []
result = []

while(True):
  sentences.append(sys.stdin.readline().strip('\n'))
  if(sentences[-1]=="."):
    sentences.pop()
    break

for sentence in sentences:
  left = []
  flag = 0
  for element in sentence:  
    if(element == "(" or element == "["):
      left.append(element)
    if(element == ")"):
      if(len(left) == 0 or left[-1] == "["):
        flag = 1
        break
      else:
        left.pop()
    if(element == "]"):
      if(len(left) == 0 or left[-1] == "("):
        flag = 1
        break
      else:
        left.pop()
  if(len(left)==0 and flag == 0):
    result.append("yes")
  else:
    result.append("no")

for i in result:
  print(i)
