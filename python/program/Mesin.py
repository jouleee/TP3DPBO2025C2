class Mesin:
    def __init__(self, nama, tenaga, torsi):
        self.__nama = nama
        self.__tenaga = tenaga
        self.__torsi = torsi
    
    def set_nama(self, nama):
        self.__nama = nama
    
    def set_tenaga(self, tenaga):
        self.__tenaga = tenaga
    
    def set_torsi(self, torsi):
        self.__torsi = torsi
    
    def get_nama(self):
        return self.__nama
    
    def get_tenaga(self):
        return self.__tenaga
    
    def get_torsi(self):
        return self.__torsi
