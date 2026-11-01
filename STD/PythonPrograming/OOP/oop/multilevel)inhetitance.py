# class Baseclass:
#     pass

# class Childclass(Baseclass):
#     pass
class Common:
    def __init__(self, name , model):
        self.name = name
        self.model = model

class Phone:
    def __init__(self, dual_sim):
        self.dual_sim = dual_sim

    def phone_call(self, number , text):
        return f"Calling {number} with text: {text}"



class Canera(Common):
    def __init__(self, megapixel, name , price):
        self.megapixel = megapixel
        self.price = price
        super().__init__(self.name, self.model)




my_camera = Canera(12, "Canon", 500)