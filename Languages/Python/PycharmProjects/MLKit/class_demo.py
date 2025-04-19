class Demo:
    def __init__(self, a, b):
        self.a = a
        self.b = b
        print(a+b)

    def show(self):
        print(" Show Method Called.")

    def draw(self):
        print(" Draw Method Called.")




d=Demo(10,20)
d.draw()
d.show()