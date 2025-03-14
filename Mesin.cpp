#include <bits/stdc++.h> // Mengimpor semua library standar

using namespace std;

class Mesin{
    private:
        string nama;
        float tenaga, torsi;
    
    public:
        Mesin(){
        }

        Mesin(string nama, float tenaga, float torsi){
            this->nama = nama;
            this->tenaga = tenaga;
            this->torsi = torsi;
        }

        void set_nama(string nama){
            this->nama = nama;
        }

        void set_tenaga(float tenaga){
            this->tenaga = tenaga;
        }

        void set_torsi(float torsi){
            this->torsi = torsi;
        }

        string get_nama(){
            return this->nama;
        }

        float get_tenaga(){
            return this->tenaga;
        }

        float get_torsi(){
            return this->torsi;
        }

        ~Mesin(){
        }
};