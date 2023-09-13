
class Rekening:
    def __init__(self):
        self.__money = 0.0

    def retrieve_money(self):
        # for retrieving money
        return self.__money

    def set_money(self, amount):
        # for setting money value
        self.__money = amount   