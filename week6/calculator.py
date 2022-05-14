import cs50

x = get_int("x: ")
y = get_int("y; ")
print(x + y)

""" Traceback of all code that got executed: 
    Stack trace.
    Python allows to namespace the functions that come from libraries
    Collision happens when you use another library
    that happens to contain same function names. 
    The compiler would not know how to link them correctly.
    In python and other languages support for namespaces,
    where you can isolate variables and function to their own namespace,
    like having their own container in memory.
"""