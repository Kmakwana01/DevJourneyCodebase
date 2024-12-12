class first:
    def __init__(self,id,name,email):
        self.id = id
        self.name = name
        self.email = email
    def show(self):
        print(f"""
            student id number is {self.id}.
            student name is {self.name}.
            student email is {self.email}""")

class second(first):
    def __init__(self,id,name,email,address):
        super().__init__(id,name,email)
        self.address = address
        # print("hello")
 
arr = []
obj = second(1,"khushal","kmakwana101@gmail.com","lathi")
obj2 = second(2,"harsh","harshmakwana1@gamil.com","surat")
ObjToDict = obj.__dict__
t = obj2.__dict__
arr.append(ObjToDict)
arr.append(t)
# print(arr)
# print(ObjToDict,arr)
print(arr[0])
objj = arr[0]
print(objj["name"])
