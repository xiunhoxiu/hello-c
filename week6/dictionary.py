words = set()  # handles dublicates

def check(word):
    if word.lower() in words:  # force every word to .lower() case.
        return True
    else:
        return False

def load(dictionary):
    file = open(dictionary, "r")  # "r" - read mode
    for line in file:
        word = line.rstrip() # rstrip - strip off from the right end of the string, the new line
        words.add(word)
    file.close()
    return True

def size():
    retun len(words)

def unload():  
    return True
