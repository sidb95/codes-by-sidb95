import add

class Print:
  def __init__(self):
    pass

  def printFunc(self, str1: str):
    print(str1)

def sumTwoNums(a: int, b: int) -> int:
  A = add.Add()
  P = Print()
  P.printFunc(A.sumTwoNums(a, b))
  return

def __main__():
  sumTwoNums(1, 0)
  return
