# TP3DPBO2025C2

## Janji
Saya Julian Dwi Satrio dengan NIM 2300484 mengerjakan Tugas Praktikum 3 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## 🚗 Program Simulasi Kendaraan dengan OOP

## Deskripsi📌 
Program ini merupakan implementasi konsep Object-Oriented Programming (OOP) dalam bahasa C++, Python, dan Java untuk mensimulasikan berbagai jenis kendaraan, khususnya mobil berbahan bakar minyak (BBM) dan mobil listrik. Program ini menerapkan implementasi OOP yaitu Inheritance dengan Hierarchical Inheritance (awalnya mau hybrid inheritance dengan bikin class mobil hybrid yang mewarisi class mobil bbm dan mobil listrik tapi gakeburu hehe) lalu menerapkan juga konsep OOP Composition dengan penggunaan class lain sebagai atribut dan List/Array Object.

## 🛠️ Desain Program
Program ini terdiri dari beberapa kelas utama:

1. **Kendaraan** (Superclass)
   - Properti umum seperti `merk`, `nama`, `warna`, dan `tahun`.
   - Getter dan setter untuk setiap atribut.

2. **Mobil** (Turunan dari Kendaraan)
   - Menambahkan properti `transmisi`, `jumlahRoda`, `mesin`, `ban`, dan `velg`.
   - Menggunakan komposisi untuk menyertakan objek dari kelas `Mesin`, `Ban`, dan `Velg`.

3. **MobilBbm** (Turunan dari Mobil)
   - Menambahkan properti `kapasitasTangki` dan `bahanBakar`.

4. **MobilListrik** (Turunan dari Mobil)
   - Menambahkan properti `kapasitasBaterai` dan `tipeBaterai`.

5. **Mesin (Composite di Mobil)**
   - Mewakili mesin kendaraan dengan properti `nama`, `tenaga (HP)`, dan `torsi (Nm)`.

6. **Ban (Composite di Mobil)**
   - Menyimpan informasi tentang `merk`, `tipe`, dan `ukuran ban`.

7. **Velg (Composite di Mobil)**
   - Menyimpan informasi tentang `merk`, `model`, `warna`, dan `ukuran velg`.

## 🔄 Alur Program
1. **Membuat objek MobilBbm** dengan semua atributnya, termasuk mesin, ban, dan velg.
2. **Membuat objek MobilListrik** dengan semua atributnya.
3. **Menampilkan informasi kendaraan** ke layar dalam format yang rapi.

Contoh output:
!Untuk Dokumentasi Program berjalan bisa dibuka di directory setiap bahasa pemrograman^^
```
==============================================
              Informasi Mobil BBM             
==============================================
Merk         : Toyota
Nama         : Supra
Warna        : Hitam
Tahun        : 2007
Transmisi    : Manual
Jumlah Roda  : 4
----------------------------------------------
Mesin        : 2JZ
Horsepower   : 100 HP
Torsi        : 200 Nm
----------------------------------------------
Ban          : Bridgestone
Velg         : Rays
----------------------------------------------
Kapasitas Tangki : 45 L
Bahan Bakar      : Pertamax
==============================================
```
