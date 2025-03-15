class Velg {
    private String merk;
    private String nama;
    private String warna;
    private int ukuran;

    public Velg() {
    }

    public Velg(String merk, String nama, String warna, int ukuran) {
        this.merk = merk;
        this.nama = nama;
        this.warna = warna;
        this.ukuran = ukuran;
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

    public void setUkuran(int ukuran) {
        this.ukuran = ukuran;
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

    public int getUkuran() {
        return this.ukuran;
    }
}