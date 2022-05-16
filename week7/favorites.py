import csv
  
titles = {}  #dictionary

with open("favorites.csv", "r") as file:
    reader = csv.DictReader(file)
    for row in reader:
        title = row["title"].strip().lower()
        if not title in titles:
            titles[title] = 0
        titles[title] += 1 # start counting from 1 as you see the first title.

# sorted in alphabetical order, sorted by key. reverse
for title in sorted(titles, key=lambda title: titles[title], reverse=True):
    print(title, titles[title])