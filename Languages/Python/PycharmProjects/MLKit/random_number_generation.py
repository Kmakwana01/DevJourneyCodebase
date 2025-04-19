import random

print(" The below is a demo of random number generation.\n")
print(random.random())

print(" \nThe below is a demo of random selection using random.choice.\n")
members = ['Rv', 'Dev', 'Darshan', 'Richard']
leader = random.choice(members)
print(leader)