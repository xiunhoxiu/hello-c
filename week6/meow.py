# poorly design
print("meow")
print("meow")
print("meow")


# sligtly better - but not reusaable
for i in [0,1,2]:
    print("meow")

# only meowing 3 three times
print("meow\n" *3, end="")

# better version, _ is a variable here but not a variable you would not reuse
for _ in range(3):
    print("meow")


""" 

# using while with user input
while True:
    n = int(input("What's n? "))
    if n > 0:
        break 

for _ in range(n):
        print("meow")

"""






# improve further
def main():
    number = get_number()
    meow(number)  

  
def get_number():
    while True:
        n = int(input("What's n? "))
        if n > n:
            break
    return n

def meow(n):
    for i in range(n):
        print("meow")

if __name__== "__main__":
    main()