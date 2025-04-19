name= input(" Enter Your Name: ")
le=len(name)
if le <= 3:
    print(" The name must be of more than 3 character.")
elif le>20:
    print(" name must be of less than 20 character.")
else:
    print(" You have entered your name succesfully:", name)