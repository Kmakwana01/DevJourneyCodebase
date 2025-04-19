weight=input("Enter Your Weight: ")
option=input(" L or K:")

if option.upper() == "L":

    weight= float(weight)/2.205
    print(f"Your are {weight} Kilogram")

else:
    weight = float(weight) * 2.205
    print(f"Your are {weight} Pounds")