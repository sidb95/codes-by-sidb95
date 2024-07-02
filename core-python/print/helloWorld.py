import random
import print

def __main__():
  P = print.Print()
  S = ('H', 'E', 'L', 'O', 'W', 'R', 'D')
  arr = ['H', 'E', 'L', 'L', 'O', ' ']
  vis = []
  count = 0
  while (count != 5):
    i = random.randint(0, 4) + 2
    if (S[i] not in vis):
      arr.append(S[i])
      vis.append(S[i])
      count += 1
  c1 = ''
  strA = c1.join(S)
  P.printFunc(strA)
  P.printFunc(arr)
