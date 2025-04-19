class Stack:
    def __init__(self):
        self.stack = []
    def push(self, value):
        self.stack = [value] + self.stack
        
    def pop(self):
        if len(self.stack) > 0:
            return self.stack.pop()
        else:
            return "Stack is empty"
        
    def peek(self):
        if len(self.stack) == 0:
            return "Stack is empty"
        return self.stack[-1]
    
    def isEmpty(self):
        return len(self.stack) == 0
    
    def size(self):
        return len(self.stack)
        
s1 = Stack()
s1.push(90)
s1.push(900)
s1.pop()
print(s1.stack)

numbers = 908020394485

string = str(numbers)
length = len(string)
print(string[length-2])