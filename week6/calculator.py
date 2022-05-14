try:
    x = int(input("x: "))
except:
    print("That is not an int!")
    exit()

try:
     y = int(input("y; "))
except:
    print("That is not an int!")
    exit()

print(x + y)

""" The CS50 library is doing that try and except """