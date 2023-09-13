public class Overloading {
    public static void main(String[] args) {
        // beda konstruktor, tetap jadi objek manusia
        Manusia ujang = new Manusia(20, "Ujang");
        Manusia udin = new Manusia("Udin", 21);
        System.out.println(ujang);
        System.out.println(udin);

        // set umur, tapi beda jenis parameter
        System.out.println("---");
        ujang.setUmur("30");
        udin.setUmur(25);
        System.out.println(ujang);
        System.out.println(udin);
    }
}
