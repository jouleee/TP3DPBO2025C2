#pragma once
#include <bits/stdc++.h> // Mengimpor semua library standar
#include "Kendaraan.cpp"
#include "Mesin.cpp"
#include "Ban.cpp"
#include "Velg.cpp"

using namespace std;

class Mobil : public Kendaraan{
    private:
        string transmisi;
        int jumlahroda;
        Mesin mesin;
        vector<Ban> ban;
        vector<Velg> velg;

    public:
        Mobil():Kendaraan(){
        }

        Mobil(string merk, string nama, string warna, int tahun, string transmisi, int jumlahroda, Mesin mesin, vector<Ban> ban, vector<Velg> velg) : Kendaraan(merk, nama, warna, tahun){
            this->transmisi = transmisi;
            this->jumlahroda = jumlahroda;
            this->mesin = mesin;
            this->ban = ban;
            this->velg = velg;
        }
        
        void set_transmisi(string transmisi){
            this->transmisi = transmisi;
        }

        void set_jumlahroda(int jumlahroda){
            this->jumlahroda = jumlahroda;
        }

        void set_mesin(Mesin mesin){
            this->mesin = mesin;
        }

        void set_ban(vector<Ban> ban){
            this->ban = ban;
        }

        void set_velg(vector<Velg> velg){
            this->velg = velg;
        }

        string get_transmisi(){
            return this->transmisi;
        }

        int get_jumlahroda(){
            return this->jumlahroda;
        }

        Mesin get_mesin(){
            return this->mesin;
        }

        vector<Ban> get_ban(){
            return this->ban;
        }

        vector<Velg> get_velg(){
            return this->velg;
        }

        ~Mobil(){
        }
};