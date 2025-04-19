name= input(" Enter Your Name: ")
le=len(name)
if le <= 3:
    print(" The name must be of more than 3 character.")
    name=input("Enter Your Name:")
    print(" You have entered your name succesfully:", name)
elif le>=20:
    print(" name must be of less than 20 character.")
    name=input("Enter Your Name:")
    print(" You have entered your name succesfully:", name)

else:
    print(" You have entered your name succesfully:", name)