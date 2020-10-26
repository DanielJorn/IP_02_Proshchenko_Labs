from math import sqrt

#input
a = float(input("Введіть а: "))
b = float(input("Введіть b: "))
c = float(input("Введіть c: "))

def validate_triangle(a, b, c):
    if any(side <= 0 for side in [a,b,c]):
        raise Exception("Вибачте, але сторони трикутника повинні бути більшими від нуля") 

    a, b, c = sorted([a, b, c])
    if a + b <= c:
       raise Exception("Вибачте, але трикутник існує тоді і тільки тоді, коли сума будь-яких двох його сторін більше третьою боку") 

#a, b are sides of the angle bisector divides
#side_against_bisector is the side bisector is drawn to
def bisector(a, b, side_against_bisector):
    c = side_against_bisector
    return sqrt(a * b * (a + b + c) * (a + b - c)) / (a + b)

validate_triangle(a,b,c)

bisector_a = bisector(c, b, a)
print("Бісектриса проведена до а: {:.2f}".format(bisector_a))

bisector_b = bisector(a, c, b)
print("Бісектриса проведена до b: {:.2f}".format(bisector_b))

bisector_c = bisector(a, b, c)
print("Бісектриса проведена до c: {:.2f}".format(bisector_c))

# evaluate radiuses 
# calculate the area  
semiPerimeter = (a + b + c) / 2 
area = sqrt(semiPerimeter*(semiPerimeter-a)*(semiPerimeter-b)*(semiPerimeter-c))

R = (a * b * c) / (4 * area)
print("Радіус описаного кола: {:.2f}".format(R))

r = area / semiPerimeter
print("Радіус вписаного кола: {:.2f}".format(r))

