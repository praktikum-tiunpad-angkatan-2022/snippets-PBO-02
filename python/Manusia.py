
class Manusia:
    def __init__(self, nama = "", umur = 0):
        self.__nama = nama
        self.__umur = umur

    def setUmur(self, umur):
        self.__umur = umur

    def getUmur(self, umur):
        return self.__umur
    
    def toString(self) :
        return self.__nama + ", " + str(self.__umur) + " tahun"
            