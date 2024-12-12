def h(b):
    def a():
        print("welcome")
        b()
        print("welcome to again")
    return a

@h
def hello():
    print("hello")
    
hello()