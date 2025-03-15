from Mobil import Mobil

class MobilListrik(Mobil):
    def __init__(self, merk, nama, warna, tahun, transmisi, jumlahroda, mesin, ban, velg, kapasitasBaterai, tipeBaterai):
        super().__init__(merk, nama, warna, tahun, transmisi, jumlahroda, mesin, ban, velg)
        self.__kapasitasBaterai = kapasitasBaterai
        self.__tipeBaterai = tipeBaterai
    
    def set_kapasitasBaterai(self, kapasitasBaterai):
        self.__kapasitasBaterai = kapasitasBaterai
    
    def set_tipeBaterai(self, tipeBaterai):
        self.__tipeBaterai = tipeBaterai
    
    def get_kapasitasBaterai(self):
        return self.__kapasitasBaterai
    
    def get_tipeBaterai(self):
        return self.__tipeBaterai