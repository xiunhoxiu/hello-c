# poorly design
print("meow")
print("meow")
print("meow")

# better version
for i in range(3):
    print("meow")

# improve further
def main():
        meow(3)  

def meow(n):
    for i in range(n):
        print("meow")

if __name__== "__main__":
    main()