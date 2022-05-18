import csv
from cs50 import SQL


db = SQL("sqlite:///favorites3.db")
title = input("Title: ").strip()

rows = db.execute("SELECT title FROM favorites3 WHERE title LIKE ?", title) 
for row in rows:
    print(row["title"])