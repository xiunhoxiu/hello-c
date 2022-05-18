import csv


from cs50 import SQL

# import csv into SQLite
db = SQL("sqlite:///favorites3.db")

# ask user for what title they want to search for
title = input("Title: ").strip()

# execute a SQL command inside of Python - returns a list of rows (dictionaries)
# and giving COUNT(*) an alias
# ? is a placeholder for title. like in C and %s
rows = db.execute("SELECT COUNT(*) AS counter FROM favorites3 WHERE title LIKE ?", title) 

# gives first row
row = rows[0]

# go inside of the first row => dictionary. 
# and gives the key counter at the value it corresponds to.
print(row["counter"])