# to accesss argument vector, you need to import it, unlike in C
from sys import argv

if len(argv) == 2:
    print(f"hello, {argv[1]}")
else:
    print("hello, world")

# CLI: python argv.py Xiu
# the word python does not apppear in the argv list.
# The name of the python program is in [0], whereas the name Xiu is in [0]