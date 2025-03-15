import java.util.List;

class MobilBbm extends Mobil {
    private int kapasitasTangki;
    private String bahanBakar;

    public MobilBbm() {
        super();
    }

    public MobilBbm(String merk, String nama, String warna, int tahun, String transmisi, int jumlahRoda, Mesin mesin, List<Ban> ban, List<Velg> velg, int kapasitasTangki, String bahanBakar) {
        super(merk, nama, warna, tahun, transmisi, jumlahRoda, mesin, ban, velg);
        this.kapasitasTangki = kapasitasTangki;
        this.bahanBakar = bahanBakar;
    }

    public void setKapasitasTangki(int kapasitasTangki) {
        this.kapasitasTangki = kapasitasTangki;
    }

    public int getKapasitasTangki() {
        return kapasitasTangki;
    }

    public void setBahanBakar(String bahanBakar) {
        this.bahanBakar = bahanBakar;
    }

    public String getBahanBakar() {
        return bahanBakar;
    }
}