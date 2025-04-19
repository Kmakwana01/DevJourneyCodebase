
guess_count=0
limit=3

num= int( input("Enter your secret number:") )

while guess_count<limit :

    gue = int(input(" Guess the secret number: "))
    guess_count += 1
    if gue==num:
            print(" You guess the right answer, congratulations!")
            break
else:
    print(" Game Over")
