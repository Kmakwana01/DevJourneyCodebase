v = int(input("enter your choice::"))
print(v)
if(v==2):
    match v:
        case 2:
           print("your choice is two")
        case 3:
            print("your choice is three")
        case _:
           print("enter valid choice")


