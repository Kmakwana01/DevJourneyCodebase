subs=3
sub_limit=0
print("NOTE: YOU NEED TO ENTER MARKS OUT OF 50.")
maths=int( input("Enter The Marks of maths:") )
sci=int( input("Enter the marks of science:") )
eng=int( input("Enter the marks of English:") )
sub_limit+=1

avarage=(maths+sci+eng)/3
print(f" the percentage= {avarage}", "%")
if avarage <35:
      print("Sorry you are fail.... Better luck next time....")
else:
      print(" congratulations... ")