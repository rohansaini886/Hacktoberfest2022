"""
In this puzzle, 100 people in a circle with gun.
The first person shoots the second and handover to the third.
You are tasked to find the only survivor.
"""
# Solution.
# Create a list with 100 zeros representing the amount of people in the circle
people = [0] * 100

#fill the zeros with ones
for i in range(100):
    people[i] = i + 1

# Get their positions start with the first persons
index = 0

# Loop through the circle (people's list)
# using a while loop checking the length of the people's list is greater than 1
while(len(people) > 1):
    # first increment the position to the next person
    index += 1
    # wrap the positions around the length of the people's list
    index = index % len(people)
    # delete that position from the list
    del people[index]
 
#print out the last survivor
print(people[0])



