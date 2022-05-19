from string import ascii_letters  # access to all english letters of the alphabet
from itertools import product  # cross product

for passcode in product(ascii_letters, repeat=4):
    print(*passcode)