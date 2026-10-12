class Bank:
    def __init__(self, balance):
        self.balance = balance
        self.minimum_withdrawal = 1000
        self.maximum_withdrawal = 50000

    def deposit (self, amount):
        self.balance += amount
        print(f"Deposited: {amount}. New balance: {self.balance}")

    def withdraw(self, amount):
        if amount < self.minimum_withdrawal:
            print(f"Withdrawal amount must be at least {self.minimum_withdrawal}.")
        elif amount > self.maximum_withdrawal:
            print(f"Withdrawal amount cannot exceed {self.maximum_withdrawal}.")
        elif amount > self.balance:
            print("Insufficient balance.")
        else:
            self.balance -= amount
            print(f"Withdrew: {amount}. New balance: {self.balance}")
brac = Bank(10000)
brac.deposit(5000)
brac.withdraw(2000)
print(f"Final balance: {brac.balance}")

brac.withdraw(60000)  # Attempt to withdraw more than the maximum limit
print(f"not witdrable: {brac.balance}")
brac.withdraw(500)    # Attempt to withdraw less than the minimum limit
print(f"not withdrawable: {brac.balance}")