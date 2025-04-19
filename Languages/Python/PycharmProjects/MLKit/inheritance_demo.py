class Main:
    def walk(self):
        print(" Walk.")


class Dog(Main):
    def bark(self):
        print(" Dog Can Bark.")


class Cat(Main):
    def slap(self):
        print(" Can can hurt you by slaping.")


d = Dog()
d.bark()
d.walk()

c = Cat()
c.slap()
c.walk()
