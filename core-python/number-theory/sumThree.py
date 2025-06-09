class Solution:
  def __init__():
    pass

  def printStringAux(str1, size1, i):
    if (i == size1):
      return
    else:
      print(str1[i])
    printStringAux(str1, size1, i + 1)

  def printString(strA: str) -> None:
    size1 = len(strA)
    printStringAux(strA, size1, 0)
    return
