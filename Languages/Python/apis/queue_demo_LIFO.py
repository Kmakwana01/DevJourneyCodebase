class Queue:
    def __init__(self):
        self.queue = []
      
    def enqueue(self, element):
      self.queue.append(element)
      
    def dequeue(self):
      front = self.queue[0]
      self.queue = self.queue[1:]
      return front
    
    def peek(self):
        if self.isEmpty():
            return "Queue is empty"
        return self.queue[0]
      
    def isEmpty(self):
      return len(self.queue) == 0
    
    def size(self):
        return len(self.queue)
    
    
q1 = Queue()
q1.enqueue('1')
q1.enqueue('2')
q1.enqueue('3')
q1.enqueue(4)
q1.dequeue()
q1.dequeue()
q1.peek()
print(q1.queue)
print(q1.isEmpty())
print(q1.size())
      