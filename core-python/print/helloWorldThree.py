class Solution:
  def __init__():
    pass

  def printStringAux(strA: str, size1: int, i: int) -> None:
    if (i == size1):
      return
    else:
      print(strA[i])
    printStringAux(strA, size1, i + 1)
    return
  
  def printString(strA: str) -> None:
    size1 = len(strA)
    printStringAux(strA, size1, 0)
    return None

def __main__():
  S1 = Solution()
  str1 = "Hello World"
  S1.printString(str1)
