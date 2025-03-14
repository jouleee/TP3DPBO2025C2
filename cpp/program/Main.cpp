#include <bits/stdc++.h> // Mengimpor semua library standar
#include "MobilBbm.cpp"
#include "MobilListrik.cpp"

using namespace std;

int main(){
    // Membuat objek MobilBbm
    MobilBbm mobilBbm("Toyota", "Supra", "Hitam", 2007, "Manual", 4, Mesin("2JZ", 100, 200), {Ban("Bridgestone", "Ecopia", 17), Ban("Bridgestone", "Ecopia", 17), Ban("Bridgestone", "Ecopia", 17), Ban("Bridgestone", "Ecopia", 17)}, {Velg("Rays", "Volk Racign TE-37","Silver", 17), Velg("Rays", "Volk Racign TE-37","Silver", 17), Velg("Rays", "Volk Racign TE-37","Silver", 17), Velg("Rays", "Volk Racign TE-37","Silver", 17) }, 45, "Pertamax");
    cout << "Mobil BBM" << endl;
    cout << "Merk: " << mobilBbm.get_merk() << endl;
    cout << "Nama: " << mobilBbm.get_nama() << endl;
    cout << "Warna: " << mobilBbm.get_warna() << endl;
    cout << "Tahun: " << mobilBbm.get_tahun() << endl;
    cout << "Transmisi: " << mobilBbm.get_transmisi() << endl;
    cout << "Jumlah Roda: " << mobilBbm.get_jumlahroda() << endl;
    cout << "Mesin: " << mobilBbm.get_mesin().get_nama() << endl;
    cout << "Horsepower: " << mobilBbm.get_mesin().get_tenaga() << endl;
    cout << "Torsi: " << mobilBbm.get_mesin().get_torsi() << endl;
    cout << "Ban: " << mobilBbm.get_ban()[0].get_merk() << endl; 
    cout << "Velg: " << mobilBbm.get_velg()[0].get_merk() << endl;
    cout << "Kapasitas Tangki: " << mobilBbm.getKapasitasTangki() << endl;
    cout << "Bahan Bakar: " << mobilBbm.getBahanBakar() << endl;
    cout << endl;

    // Membuat objek MobilListrik
    MobilListrik mobilListrik("Tesla", "Model S", "Putih", 2019, "Automatic", 4, Mesin("Tesla", 100, 200), {Ban("Dunlop", "SP31", 17), Ban("Dunlop", "SP31", 17), Ban("Dunlop", "SP31", 17), Ban("Dunlop", "SP31", 17)}, {Velg("BBS", "CHR-II","Silver", 17), Velg("Rays", "CHR-II","Silver", 17), Velg("Rays", "CHR-II","Silver", 17), Velg("Rays", "CHR-II","Silver", 17) }, 1200, "Lithium");
    cout << "Mobil Listrik" << endl;
    cout << "Merk: " << mobilListrik.get_merk() << endl;
    cout << "Nama: " << mobilListrik.get_nama() << endl;
    cout << "Warna: " << mobilListrik.get_warna() << endl;
    cout << "Tahun: " << mobilListrik.get_tahun() << endl;
    cout << "Transmisi: " << mobilListrik.get_transmisi() << endl;
    cout << "Jumlah Roda: " << mobilListrik.get_jumlahroda() << endl;
    cout << "Mesin: " << mobilListrik.get_mesin().get_nama() << endl;
    cout << "Horsepower: " << mobilListrik.get_mesin().get_tenaga() << endl;
    cout << "Torsi: " << mobilListrik.get_mesin().get_torsi() << endl;
    cout << "Ban: " << mobilListrik.get_ban()[0].get_merk() << endl;
    cout << "Velg: " << mobilListrik.get_velg()[0].get_merk() << endl;
    cout << "Kapasitas Baterai: " << mobilListrik.get_kapasitasBaterai() << endl;
    cout << "Tipe Baterai: " << mobilListrik.get_tipeBaterai() << endl;
    cout << endl;
    return 0;
}