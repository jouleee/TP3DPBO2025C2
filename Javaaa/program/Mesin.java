class Mesin {
    private String nama;
    private float tenaga;
    private float torsi;

    public Mesin() {
    }

    public Mesin(String nama, float tenaga, float torsi) {
        this.nama = nama;
        this.tenaga = tenaga;
        this.torsi = torsi;
    }

    public void setNama(String nama) {
        this.nama = nama;
    }

    public void setTenaga(float tenaga) {
        this.tenaga = tenaga;
    }

    public void setTorsi(float torsi) {
        this.torsi = torsi;
    }

    public String getNama() {
        return this.nama;
    }

    public float getTenaga() {
        return this.tenaga;
    }

    public float getTorsi() {
        return this.torsi;
    }
}