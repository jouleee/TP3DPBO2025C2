#pragma once

#include <bits/stdc++.h> // Mengimpor semua library standar
#include "Mobil.cpp"

using namespace std;

class MobilListrik : public Mobil {
    private:
        int kapasitasBaterai;
        string tipeBaterai;
    
    public:
        MobilListrik(){
        }

        MobilListrik(string merk, string nama, string warna, int tahun, string transmisi, int jumlahroda, Mesin mesin, vector<Ban> ban, vector<Velg> velg, int kapasitasBaterai, string tipeBaterai) : Mobil(merk, nama, warna, tahun, transmisi, jumlahroda, mesin, ban, velg){
            this->kapasitasBaterai = kapasitasBaterai;
            this->tipeBaterai = tipeBaterai;
        }

        void set_kapasitasBaterai(int kapasitasBaterai){
            this->kapasitasBaterai = kapasitasBaterai;
        }

        void set_tipeBaterai(string tipeBaterai){
            this->tipeBaterai = tipeBaterai;
        }

        int get_kapasitasBaterai(){
            return this->kapasitasBaterai;
        }

        string get_tipeBaterai(){
            return this->tipeBaterai;
        }

        ~MobilListrik(){
        }
};
