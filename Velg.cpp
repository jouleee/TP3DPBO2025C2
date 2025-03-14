#include <bits/stdc++.h> // Mengimpor semua library standar

using namespace std;

class Velg{
    private:
        string merk, nama, warna;
        int ukuran;
    
    public:
        Velg(){
        }

        Velg(string merk, string nama, string warna, int ukuran){
            this->merk = merk;
            this->nama = nama;
            this->warna = warna;
            this->ukuran = ukuran;
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

        void set_ukuran(int ukuran){
            this->ukuran = ukuran;
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

        int get_ukuran(){
            return this->ukuran;
        }

        ~Velg(){
        }
};