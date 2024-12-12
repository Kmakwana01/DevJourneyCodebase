# import time as a
i=11
try:
    while i < 10:
        print("hii", i)
        i = i + 1
except ValueError:
    print("error1",ValueError)
finally:
    print("finally print")

print("hii")

