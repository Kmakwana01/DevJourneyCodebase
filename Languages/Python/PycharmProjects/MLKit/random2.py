import random


class Dice:
    def roll(self):
        rl = (random.randint(1, 6), random.randint(1, 6))
        print(rl)

    def roll2(self):
        first = random.randint(1, 6)
        second = random.randint(1, 6)
        return first, second


d = Dice()
d.roll()
print(d.roll2())
