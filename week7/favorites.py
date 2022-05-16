import csv
  
titles = {}

with open("favorites.csv", "r") as file:
    reader = csv.DictReader(file)
    for row in reader:
        title = row["title"].strip().lower()
        if title in titles:
            titles[title] += 1
        else:
            titles[title] = 1 # start counting at 1 as you see the first title.

for title in sorted(titles):
    print(title, titles[title])