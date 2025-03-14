#pragma once
#include <bits/stdc++.h>
#include "Mobil.cpp"

using namespace std;

class MobilBbm : public Mobil {
private:
    int kapasitasTangki;
    string bahanBakar;

public:
    // Default constructor
    MobilBbm() : Mobil() {
    }

    // Parameterized constructor: sertakan parameter untuk kelas dasar Mobil dan parameter khusus MobilBbm
    MobilBbm(string merk, string nama, string warna, int tahun, string transmisi, int jumlahroda, Mesin mesin, vector<Ban> ban, vector<Velg> velg, int kapasitasTangki, string bahanBakar)
        : Mobil(merk, nama, warna, tahun, transmisi, jumlahroda, mesin, ban, velg) {
        this->kapasitasTangki = kapasitasTangki;
        this->bahanBakar = bahanBakar;
    }

    void setKapasitasTangki(int kapasitasTangki) {
        this->kapasitasTangki = kapasitasTangki;
    }

    int getKapasitasTangki() const {
        return kapasitasTangki;
    }

    void setBahanBakar(const string &bahanBakar) {
        this->bahanBakar = bahanBakar;
    }

    string getBahanBakar() const {
        return bahanBakar;
    }

    ~MobilBbm() {
    }
};
