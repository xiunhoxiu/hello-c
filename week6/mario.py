for i in range(4):
    print("?", end="!!!!")  # print() takes other argumentes.
print()

# 4 question markes on a line
print("?" * 4)

# 3x3 bricks
for i in range(3):
    for j in range(3):
        print("#", end="")
    print()

# 3x3 bricks - another trick
for i in range(3):
    print("#" * 3)