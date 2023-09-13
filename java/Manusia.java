
public class Manusia {
    private String nama;
    private int umur;

    public Manusia() {
        nama = null;
        umur = 0;
    }

    public Manusia(String nama, int umur) {
        this.nama = nama;
        this.umur = umur;
    }

    public Manusia(int umur, String nama) {
        this.umur = umur;
        this.nama = nama;
    }

    public void setUmur(int umur) {
        this.umur = umur;
    }

    public void setUmur(String umur) {
        this.umur = Integer.parseInt(umur);
    }

    @Override
    public String toString() {
        return this.nama + ", " + this.umur + " tahun";
    }
}
