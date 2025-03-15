from Kendaraan import Kendaraan
from Mesin import Mesin
from Ban import Ban
from Velg import Velg

class Mobil(Kendaraan):
    def __init__(self, merk, nama, warna, tahun, transmisi, jumlahroda, mesin, ban, velg):
        super().__init__(merk, nama, warna, tahun)
        self.__transmisi = transmisi
        self.__jumlahroda = jumlahroda
        self.__mesin = mesin if mesin else Mesin()
        self.__ban = ban if ban else []
        self.__velg = velg if velg else []
    
    def set_transmisi(self, transmisi):
        self.__transmisi = transmisi
    
    def set_jumlahroda(self, jumlahroda):
        self.__jumlahroda = jumlahroda
    
    def set_mesin(self, mesin):
        self.__mesin = mesin
    
    def set_ban(self, ban):
        self.__ban = ban
    
    def set_velg(self, velg):
        self.__velg = velg
    
    def get_transmisi(self):
        return self.__transmisi
    
    def get_jumlahroda(self):
        return self.__jumlahroda
    
    def get_mesin(self):
        return self.__mesin
    
    def get_ban(self):
        return self.__ban
    
    def get_velg(self):
        return self.__velg