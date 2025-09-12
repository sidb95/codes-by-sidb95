from circle import Circle

def __main__():
    radius1 = int(input())
    circle1 = Circle(radius1)
    print(circle1.perimeter(), circle1.area())

__main__()
