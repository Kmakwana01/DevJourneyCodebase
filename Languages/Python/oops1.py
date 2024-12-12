class student:
    rollno = None
    name = None
    fathername = None
    surname = None
    age = None
    
    def __init__(self):
        print("hello student")
        
    def detail(self):
        print(f"Student Full Name :: {self.name} {self.fathername} {self.surname} \n student age :: {self.age}\n student roll no. is {self.rollno}")
    
first = student()
first.rollno = 20
first.name = "khushal"
first.fathername = "gautambhai"
first.surname = "Makwana"
first.detail()
    
    