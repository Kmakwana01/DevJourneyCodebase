class father:
    def __init__(self, name, age, mobile):
        self.name = name
        self.age = age
        self.mobile = mobile
        # print("hello")

    def show(self):
        print(
            f"""
            my name is {self.name}. 
            my age is {self.age}.
            my mobile number is {self.mobile}."""
        )

class children(father):
    def __init__(self,name,age,mobile,email):
        super().__init__(name, age, mobile)
        self.email = email
    def show1(self):
        print(f"email is {self.email}")
    
# f = father("gautambhai", "40", 7265912212)
# f.show()
c = children("asdf",34,555555,"lathi")
c.show1()
c.show()
