from math import sqrt

x = float(input("enter x: "))
epsilon = 0.0001
an = 0
sum = 0
n = 0
while (an >= epsilon or n < 10):
    n = n + 1
    an = x / (sqrt(n) * (n + 2))
    sum = sum + an
    print("n: ", n, " \nan: ", an)
print(sum)
