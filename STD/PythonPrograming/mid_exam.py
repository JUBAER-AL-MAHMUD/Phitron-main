from abc import ABC
from os import name

class user(ABC):
    def __init__(self, name, email,phone, address):
        self.name = name
        self.email = email
        self.phone = phone
        self.address = address

class Employee(user):
    def __init__(self, name, email,phone , address, designation, age , salary):
        super().__init__(name, email,phone , address)
        self.designation = designation
        self.age = age
        self.salary = salary




emp = Employee("Fahim", "fahim@gmail.com", "01712345678", "Dhaka", "Software Engineer", 25, 20000)

# print (emp.name)
# print (emp.email)
# print (emp.phone)
# print (emp.address)
# print (emp.designation)
# print (emp.age)
# print (emp.salary)

# admin = Admin("Alice", "alice@gmail.com", "01712345678", "Dhaka", "System Administrator", 30, 30000)

class Admin(user):
    def __init__(self, name, email,phone , address):
        super().__init__(name, email,phone , address)
       

    def add_employee(self, Restuarent, employee):
        Restuarent.add_employee(employee)

    def view_employees(self, Restuarent):
        Restuarent.view_employees()

    def add_menu_item(self, Restuarent, item):
        Restuarent.menu.add_menu_item(item)

    def remove_menu_item(self, Restuarent, item):
        Restuarent.menu.remove_menu_item(item)

    

class Restuarent:
    def __init__(self, name):
        self.name = name
        self.employees = []  
        self.menu = fooditem()

    def add_employee(self, employee):     
            self.employees.append(employee)
            print(f"Employee {name} added successfully.")

    def view_employees(self):
            print("Employee List:")
            for empl in self.employees:
                print(f"Name: {empl.name}, Email: {empl.email}, Phone: {empl.phone}, Address: {empl.address}, Designation: {empl.designation}, Age: {empl.age}, Salary: {empl.salary}")

class menu:
    def __init__(self):
        self.items = []

    def add_menu_item(self, item):
        self.items.append(item)
        print(f"Item {item} added successfully.")

    def find_menu_item(self, item):
        for item in self.items:
            if item.name.lower() == item.lower():
                return item
            
        return None

    def remove_menu_item(self, item):
        item = self.find_menu_item(item)
        if item:
            self.items.remove(item)
            print(f"Item {item.name} removed successfully.")
        else:
            print(f"Item {item} not found in the menu.")

    def show_menu(self):
        print("Menu:")
        for item in self.items:
            print(f"Name: {item.name}, Description: {item.description}, Price: {item.price}, Quantity: {item.quantity}")

class fooditem:
    def __init__(self, name, description, price, quantity):
        self.name = name
        self.description = description
        self.price = price
        self.quantity = quantity











            

mn = menu()
item = fooditem("Burger", "Delicious beef burger", 5.99, 10)
mn.add_menu_item(item)
mn.show_menu()
