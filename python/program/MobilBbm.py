from Mobil import Mobil

class MobilBbm(Mobil):
    def __init__(self, merk, nama, warna, tahun, transmisi, jumlahroda, mesin, ban, velg, kapasitasTangki, bahanBakar):
        super().__init__(merk, nama, warna, tahun, transmisi, jumlahroda, mesin, ban, velg)
        self.__kapasitasTangki = kapasitasTangki
        self.__bahanBakar = bahanBakar
    
    def set_kapasitasTangki(self, kapasitasTangki):
        self.__kapasitasTangki = kapasitasTangki
    
    def get_kapasitasTangki(self):
        return self.__kapasitasTangki
    
    def set_bahanBakar(self, bahanBakar):
        self.__bahanBakar = bahanBakar
    
    def get_bahanBakar(self):
        return self.__bahanBakar