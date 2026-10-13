
class Animal:
    def __init__(self, name):
        self.name = name

    def make_sound(self):
        pass


class Dog(Animal):
    def make_sound(self):
        print("Ghew ghew")


class Cat(Animal):
    def make_sound(self):
        print("Meow meow")


class Cow(Animal):
    def make_sound(self):
        print("Hamba hamba")


animals = [
    Dog("Tommy"),
    Cat("Mimi"),
    Cow("Lali")
]

for animal in animals:
    animal.make_sound()
