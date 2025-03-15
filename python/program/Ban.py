class Ban:
    def __init__(self, merk, ukuran, tahun_pembuatan):
        self.__merk = merk
        self.__ukuran = ukuran
        self.__tahun_pembuatan = tahun_pembuatan
    
    def set_merk(self, merk):
        self.__merk = merk
    
    def set_ukuran(self, ukuran):
        self.__ukuran = ukuran
    
    def set_tahun_pembuatan(self, tahun_pembuatan):
        self.__tahun_pembuatan = tahun_pembuatan
    
    def get_merk(self):
        return self.__merk
    
    def get_ukuran(self):
        return self.__ukuran
    
    def get_tahun_pembuatan(self):
        return self.__tahun_pembuatan
