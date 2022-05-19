from string import digits  # access to all decimal digits
from itertools import product  # cross product numbers

for passcode in product(digits, repeat=4):
    print(*passcode)

