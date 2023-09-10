
class Rekening:
    def __init__(self):
        self.money = 0.0

    def retrieve_money(self):
        # for retrieving money
        return self.money

    def set_money(self, amount):
        # for setting money value
        self.money = amount   