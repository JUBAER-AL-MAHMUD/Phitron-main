class Shop:
    def __init__(self, name, location):
        self.name = name
        self.location = location
        self.cart = []

    def add_to_cart(self, item):
        self.cart.append(item)

firoz= Shop("Firoz Electronics", "Dhaka")
firoz.add_to_cart("Laptop")
firoz.add_to_cart("Mouse")
print(firoz.cart)

tahin = Shop("Tahin Electronics", "Chittagong")
tahin.add_to_cart("Keyboard")
tahin.add_to_cart("Monitor")
print(tahin.cart)