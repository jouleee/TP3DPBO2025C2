#include <bits/stdc++.h> // Mengimpor semua library standar

using namespace std;

class Ban{
    private:
        string merk, ukuran;
        int tahun_pembuatan;
    
    public:
        Ban(){
        }

        Ban(string merk, string ukuran, int tahun_pembuatan){
            this->merk = merk;
            this->ukuran = ukuran;
            this->tahun_pembuatan = tahun_pembuatan;
        }

        void set_merk(string merk){
            this->merk = merk;
        }

        void set_ukuran(string ukuran){
            this->ukuran = ukuran;
        }

        void set_tahun_pembuatan(int tahun_pembuatan){
            this->tahun_pembuatan = tahun_pembuatan;
        }

        string get_merk(){
            return this->merk;
        }

        string get_ukuran(){
            return this->ukuran;
        }

        int get_tahun_pembuatan(){
            return this->tahun_pembuatan;
        }

        ~Ban(){
        }
};