
tutorial=input(" Enter ' help ' to get the totorial:")

if tutorial.upper() == "HELP":

    cmd=input(" Enter ' start ' to start the game. \n Enter ' Stop ' to stop the car. \n Enter ' Quite ' to quite the game.")
    if cmd.upper() == "START":
        print(" Car started...")
    elif cmd.upper() == "STOP":
            print(" Car stopped...")
    elif cmd.upper() == "QUITE":
            print(" Game closed....")

else:
    print(" I dont understand...")


