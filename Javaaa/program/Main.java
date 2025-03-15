import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        MobilBbm mobilBbm = new MobilBbm(
            "Toyota", "Supra", "Hitam", 2007, "Manual", 4, new Mesin("2JZ", 100, 200),
            Arrays.asList(new Ban("Bridgestone", "Ecopia", 17), new Ban("Bridgestone", "Ecopia", 17), new Ban("Bridgestone", "Ecopia", 17), new Ban("Bridgestone", "Ecopia", 17)),
            Arrays.asList(new Velg("Rays", "Volk Racing TE-37", "Silver", 17), new Velg("Rays", "Volk Racing TE-37", "Silver", 17), new Velg("Rays", "Volk Racing TE-37", "Silver", 17), new Velg("Rays", "Volk Racing TE-37", "Silver", 17)),
            45, "Pertamax"
        );

        System.out.println("\n==============================================");
        System.out.println("              Informasi Mobil BBM             ");
        System.out.println("==============================================");
        System.out.println("Merk         : " + mobilBbm.getMerk());
        System.out.println("Nama         : " + mobilBbm.getNama());
        System.out.println("Warna        : " + mobilBbm.getWarna());
        System.out.println("Tahun        : " + mobilBbm.getTahun());
        System.out.println("Transmisi    : " + mobilBbm.getTransmisi());
        System.out.println("Jumlah Roda  : " + mobilBbm.getJumlahRoda());
        System.out.println("----------------------------------------------");
        System.out.println("Mesin        : " + mobilBbm.getMesin().getNama());
        System.out.println("Horsepower   : " + mobilBbm.getMesin().getTenaga() + " HP");
        System.out.println("Torsi        : " + mobilBbm.getMesin().getTorsi() + " Nm");
        System.out.println("----------------------------------------------");
        System.out.println("Ban          : " + mobilBbm.getBan().get(0).getMerk());
        System.out.println("Velg         : " + mobilBbm.getVelg().get(0).getMerk());
        System.out.println("----------------------------------------------");
        System.out.println("Kapasitas Tangki : " + mobilBbm.getKapasitasTangki() + " L");
        System.out.println("Bahan Bakar      : " + mobilBbm.getBahanBakar());
        System.out.println("==============================================");
        System.out.println();

        MobilListrik mobilListrik = new MobilListrik(
            "Tesla", "Model S", "Putih", 2019, "Automatic", 4, new Mesin("Tesla", 100, 200),
            Arrays.asList(new Ban("Dunlop", "SP31", 17), new Ban("Dunlop", "SP31", 17), new Ban("Dunlop", "SP31", 17), new Ban("Dunlop", "SP31", 17)),
            Arrays.asList(new Velg("BBS", "CHR-II", "Silver", 17), new Velg("BBS", "CHR-II", "Silver", 17), new Velg("BBS", "CHR-II", "Silver", 17), new Velg("BBS", "CHR-II", "Silver", 17)),
            1200, "Lithium"
        );

        // Tampilan dekoratif menggunakan garis dan judul
        System.out.println("\n==============================================");
        System.out.println("            Informasi Mobil Listrik           ");
        System.out.println("==============================================");
        System.out.println("Merk         : " + mobilListrik.getMerk());
        System.out.println("Nama         : " + mobilListrik.getNama());
        System.out.println("Warna        : " + mobilListrik.getWarna());
        System.out.println("Tahun        : " + mobilListrik.getTahun());
        System.out.println("Transmisi    : " + mobilListrik.getTransmisi());
        System.out.println("Jumlah Roda  : " + mobilListrik.getJumlahRoda());
        System.out.println("----------------------------------------------");
        System.out.println("Mesin        : " + mobilListrik.getMesin().getNama());
        System.out.println("Horsepower   : " + mobilListrik.getMesin().getTenaga() + " HP");
        System.out.println("Torsi        : " + mobilListrik.getMesin().getTorsi() + " Nm");
        System.out.println("----------------------------------------------");
        System.out.println("Ban          : " + mobilListrik.getBan().get(0).getMerk());
        System.out.println("Velg         : " + mobilListrik.getVelg().get(0).getMerk());
        System.out.println("----------------------------------------------");
        System.out.println("Kapasitas Baterai : " + mobilListrik.getKapasitasBaterai() + " mAh");
        System.out.println("Tipe Baterai      : " + mobilListrik.getTipeBaterai());
        System.out.println("==============================================");
        System.out.println();
    }
}