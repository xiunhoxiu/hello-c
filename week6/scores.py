from cs50 import get_int

"""
    empty list in python (linked list - can grow and shrink, not dealing with pointers), 
    in C: fixed size array
"""

scores = []
for i in range(3):
    score = get_int("Score: ")
    scores.append(score)
    

average = sum(scores) / len(scores)
print(f"Average: {average}")
