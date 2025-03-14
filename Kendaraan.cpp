#include <bits/stdc++.h> // Mengimpor semua library standar

using namespace std;

class Kendaraan{
    private:
        string merk, nama, warna;
        int tahun;
    
    public:
        Kendaraan(){
        }

        Kendaraan(string merk, string nama, string warna, int tahun){
            this->merk = merk;
            this->nama = nama;
            this->warna = warna;
            this->tahun = tahun;
        }

        void set_merk(string merk){
            this->merk = merk;
        }

        void set_nama(string nama){
            this->nama = nama;
        }

        void set_warna(string warna){
            this->warna = warna;
        }

        void set_tahun(int tahun){
            this->tahun = tahun;
        }

        string get_merk(){
            return this->merk;
        }

        string get_nama(){
            return this->nama;
        }

        string get_warna(){
            return this->warna;
        }

        int get_tahun(){
            return this->tahun;
        }

        ~Kendaraan(){
        }
};