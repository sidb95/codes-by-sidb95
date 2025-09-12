# sidb95
# circle.py
# 12 Sep 2025


import math
from shape import Shape

class Circle(Shape):
    def __init__(self, r):
        self.r = r

    def perimeter(self):
        return 2 * math.pi * float(self.r)
    
    def area(self):
        return math.pi * float(self.r * self.r)
