n = int(input("enter n: "))
x1 = 1
x2 = 0.3
x_prev = x1
x_cur = x2
xi = 0

# print first 2 elements
print(x1)
print(x2)

# calculate other elements
for i in range(3, n + 1):
  xi = (i + 1) * x_prev 
  x_prev = x_cur
  x_cur = xi
  print(xi)
