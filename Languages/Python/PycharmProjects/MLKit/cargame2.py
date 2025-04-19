
command = ""
started = False

while command.lower() != "quit":

    command = input(" Enter Command:").lower()

    if command == "start":
        if started:
            print(" The Car Is Already Started...\n You Can stop it or you can quit the game.")

        else:
            started = True
            print(" Car started....")

    elif command == "stop":
        if not started:
            print(" The Car Is Already Stopped...\n You Can start it or you can quit the game.")

        else:
            started = False
            print(" Car Stopped....")


    elif command == "help":
        print("""
Start- To start the car.
Stop- To stop the car.
Quit- To quit the game.        
              """)

    elif command == "quit":
        break

    else:
        print(" I dont undertand.....")
