print("Please enter x and y: ")

x = float(input("x = "))
y = float(input("y = "))

if (x > 0 and y > 0):
    print("I quadrant")
elif (x < 0 and y > 0):
    print("II quadrant")
elif (x < 0 and y < 0):
    print("III quadrant")
elif (x > 0 and y < 0):
    print("IV quadrant")
elif (x == 0, y == 0):
    print("It's origin")
