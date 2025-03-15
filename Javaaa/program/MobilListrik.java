import java.util.List;

class MobilListrik extends Mobil {
    private int kapasitasBaterai;
    private String tipeBaterai;

    public MobilListrik() {
        super();
    }

    public MobilListrik(String merk, String nama, String warna, int tahun, String transmisi, int jumlahRoda, Mesin mesin, List<Ban> ban, List<Velg> velg, int kapasitasBaterai, String tipeBaterai) {
        super(merk, nama, warna, tahun, transmisi, jumlahRoda, mesin, ban, velg);
        this.kapasitasBaterai = kapasitasBaterai;
        this.tipeBaterai = tipeBaterai;
    }

    public void setKapasitasBaterai(int kapasitasBaterai) {
        this.kapasitasBaterai = kapasitasBaterai;
    }

    public int getKapasitasBaterai() {
        return kapasitasBaterai;
    }

    public void setTipeBaterai(String tipeBaterai) {
        this.tipeBaterai = tipeBaterai;
    }

    public String getTipeBaterai() {
        return tipeBaterai;
    }
}