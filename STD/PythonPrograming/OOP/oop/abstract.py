
from abc import ABC, abstractmethod


# Abstract Base Class
class Animal(ABC):

    @abstractmethod
    def eat(self):
        pass

    @abstractmethod
    def move(self):
        pass


# Child Class
class Monkey(Animal):

    def __init__(self, name):
        self.name = name

    def eat(self):
        print(f"{self.name} needs food")

    def move(self):
        print(f"{self.name} climbs trees")


class Dog(Animal):

    def __init__(self, name):
        self.name = name

    def eat(self):
        print(f"{self.name} eats meat")

    def move(self):
        print(f"{self.name} runs on four legs")


# Create Objects
monkey = Monkey("Babu")
dog = Dog("Tommy")

# Call Methods
monkey.eat()
monkey.move()

print("----------")

dog.eat()
dog.move()
