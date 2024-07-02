import add

def __main__():
  S = Solution()
  P = Print()
  a = 1
  b = 0
  sum1 = S.sum(a, b)
  P.printFunc(sum1)
  return

class Print:
  def __init__(self):
    pass

  def printFunc(self, str1: str):
    print(str1)
    return

class Solution:
  def __init__():
    pass

  def sum(self, a: str, b: str) -> str:
    A = add.Add()
    sumA = A.sumTwoNums(a, b)
    return sumA

__main__()
