public class Enkapsulasi {
    public static void main(String[] args) {
        Rekening bca = new Rekening();

        // bca.money;
        // bca.money = 1000000;
        // baris-baris diatas akan error karena mengakses private property

        // untuk mengakses money, diperlukan fungsi getter
        bca.retrieveMoney();
        System.out.println(bca.retrieveMoney());

        // untuk mengubah isi money, diperlukan fungsi setter
        bca.setMoney(20000);
        System.out.println(bca.retrieveMoney());
    }
}