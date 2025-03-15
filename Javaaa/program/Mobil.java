import java.util.List;

class Mobil extends Kendaraan {
    private String transmisi;
    private int jumlahRoda;
    private Mesin mesin;
    private List<Ban> ban;
    private List<Velg> velg;

    public Mobil() {
        super();
    }

    public Mobil(String merk, String nama, String warna, int tahun, String transmisi, int jumlahRoda, Mesin mesin, List<Ban> ban, List<Velg> velg) {
        super(merk, nama, warna, tahun);
        this.transmisi = transmisi;
        this.jumlahRoda = jumlahRoda;
        this.mesin = mesin;
        this.ban = ban;
        this.velg = velg;
    }

    public void setTransmisi(String transmisi) {
        this.transmisi = transmisi;
    }

    public void setJumlahRoda(int jumlahRoda) {
        this.jumlahRoda = jumlahRoda;
    }

    public void setMesin(Mesin mesin) {
        this.mesin = mesin;
    }

    public void setBan(List<Ban> ban) {
        this.ban = ban;
    }

    public void setVelg(List<Velg> velg) {
        this.velg = velg;
    }

    public String getTransmisi() {
        return this.transmisi;
    }

    public int getJumlahRoda() {
        return this.jumlahRoda;
    }

    public Mesin getMesin() {
        return this.mesin;
    }

    public List<Ban> getBan() {
        return this.ban;
    }

    public List<Velg> getVelg() {
        return this.velg;
    }
}
