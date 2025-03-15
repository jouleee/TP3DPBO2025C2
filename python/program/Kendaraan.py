class Kendaraan:
    def __init__(self, merk, nama, warna, tahun):
        self.__merk = merk
        self.__nama = nama
        self.__warna = warna
        self.__tahun = tahun
    
    def set_merk(self, merk):
        self.__merk = merk
    
    def set_nama(self, nama):
        self.__nama = nama
    
    def set_warna(self, warna):
        self.__warna = warna
    
    def set_tahun(self, tahun):
        self.__tahun = tahun
    
    def get_merk(self):
        return self.__merk
    
    def get_nama(self):
        return self.__nama
    
    def get_warna(self):
        return self.__warna
    
    def get_tahun(self):
        return self.__tahun