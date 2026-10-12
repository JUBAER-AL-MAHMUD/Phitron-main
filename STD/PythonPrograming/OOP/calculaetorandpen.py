# class calculetor:
#     brand = 'casio'

#     def add(self, a, b):
#         return a + b
#     def detuct(self, a, b):
#         return a - b

# result = calculetor()
# print (result.brand)
# print (result.add(int (input("Enter first number: ")), int (input("Enter second number: "))))
# print (result.detuct (10, 5))


class pen:
    pass

    def __init__(self, brand, color , weight):
        self.brand = brand
        self.color = color
        self.weight = weight

first = pen ("hero", "blue", "100g")
second = pen ("reynolds", "black", "150g")
third = pen ("pilot", "red", "200g")

print (first.brand, first.color, first.weight)
print (second.brand, second.color, second.weight)
print (third.brand, third.color, third.weight)
