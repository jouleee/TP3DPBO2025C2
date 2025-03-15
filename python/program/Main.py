from Ban import Ban
from Mesin import Mesin
from Velg import Velg
from MobilBbm import MobilBbm
from MobilListrik import MobilListrik

def print_mobil_info(mobil):
    print("==============================================")
    print(f"Merk         : {mobil.get_merk()}")
    print(f"Nama         : {mobil.get_nama()}")
    print(f"Warna        : {mobil.get_warna()}")
    print(f"Tahun        : {mobil.get_tahun()}")
    print(f"Transmisi    : {mobil.get_transmisi()}")
    print(f"Jumlah Roda  : {mobil.get_jumlahroda()}")
    print("----------------------------------------------")
    print(f"Mesin        : {mobil.get_mesin().get_nama()}")
    print(f"Horsepower   : {mobil.get_mesin().get_tenaga()} HP")
    print(f"Torsi        : {mobil.get_mesin().get_torsi()} Nm")
    print("----------------------------------------------")
    print("Ban          :", ", ".join([ban.get_merk() for ban in mobil.get_ban()]))
    print("Velg         :", ", ".join([velg.get_merk() for velg in mobil.get_velg()]))
    print("----------------------------------------------")
    if isinstance(mobil, MobilBbm):
        print(f"Kapasitas Tangki : {mobil.get_kapasitasTangki()} L")
        print(f"Bahan Bakar      : {mobil.get_bahanBakar()}")
    elif isinstance(mobil, MobilListrik):
        print(f"Kapasitas Baterai : {mobil.get_kapasitasBaterai()} mAh")
        print(f"Tipe Baterai      : {mobil.get_tipeBaterai()}")
    print("==============================================\n")

ban_list = [Ban("Bridgestone", "Ecopia", 17) for _ in range(4)]
velg_list = [Velg("Rays", "Volk Racing TE-37", "Silver", 17) for _ in range(4)]

mobil_bbm = MobilBbm("Toyota", "Supra", "Hitam", 2007, "Manual", 4, Mesin("2JZ", 100, 200), ban_list, velg_list, 45, "Pertamax")
mobil_listrik = MobilListrik("Tesla", "Model S", "Putih", 2019, "Automatic", 4, Mesin("Tesla", 100, 200), ban_list, velg_list, 1200, "Lithium")

print_mobil_info(mobil_bbm)
print_mobil_info(mobil_listrik)