class Kendaraan {
    private String merk;
    private String nama;
    private String warna;
    private int tahun;

    public Kendaraan() {
    }

    public Kendaraan(String merk, String nama, String warna, int tahun) {
        this.merk = merk;
        this.nama = nama;
        this.warna = warna;
        this.tahun = tahun;
    }

    public void setMerk(String merk) {
        this.merk = merk;
    }

    public void setNama(String nama) {
        this.nama = nama;
    }

    public void setWarna(String warna) {
        this.warna = warna;
    }

    public void setTahun(int tahun) {
        this.tahun = tahun;
    }

    public String getMerk() {
        return this.merk;
    }

    public String getNama() {
        return this.nama;
    }

    public String getWarna() {
        return this.warna;
    }

    public int getTahun() {
        return this.tahun;
    }
}