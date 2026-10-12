class Shop:
    def __init__(self, name):
        self.name = name
        self.items = []

    def cart(self, item , price ,  quantity):
        product = {
            "item": item,
            "price": price,
            "quantity": quantity
        }
        self.items.append(product)


    def checkout(self,amount):
        total = 0 
        for item in self.items:
            # print (item)
            total += item["price"] * item["quantity"]
        print(f"Total amount: {total}")

        if amount < total:
            print(f"Insufficient amount. You need to pay {total - amount} more.")

        else:
            change = amount - total
            print(f"Payment successful. Your change is {change}. Thank you for shopping at {self.name}!")

tahin = Shop("Tahin Store")
tahin.cart("Apple", 100, 5)
tahin.cart("Banana", 50, 10)
tahin.cart("Orange", 80, 8)

print (tahin.items)

tahin.checkout(1000)  # Attempt to checkout with a total amount of 1000