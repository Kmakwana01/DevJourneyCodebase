try:
    age = int(input("Enter your Age:"))
    salary = 20000
    risk = salary/age
    print(risk)


except ValueError:
    print(" Invalid Value.")

except ZeroDivisionError:
    print(" Cannot be devide with 0.")
