# poorly design
print("meow")
print("meow")
print("meow")

# better version
for i in range(3):
    print("meow")

# improve further
def main():
    for i in range(3):
        meow()  

def meow():
    print("meow")

if __name__=="__main__":
main()