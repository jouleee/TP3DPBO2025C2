class Ban {
    private String merk;
    private String ukuran;
    private int tahunPembuatan;

    public Ban() {
    }

    public Ban(String merk, String ukuran, int tahunPembuatan) {
        this.merk = merk;
        this.ukuran = ukuran;
        this.tahunPembuatan = tahunPembuatan;
    }

    public void setMerk(String merk) {
        this.merk = merk;
    }

    public void setUkuran(String ukuran) {
        this.ukuran = ukuran;
    }

    public void setTahunPembuatan(int tahunPembuatan) {
        this.tahunPembuatan = tahunPembuatan;
    }

    public String getMerk() {
        return this.merk;
    }

    public String getUkuran() {
        return this.ukuran;
    }

    public int getTahunPembuatan() {
        return this.tahunPembuatan;
    }
}