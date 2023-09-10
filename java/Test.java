
import child1.File1;


public class Test {
    public static void main(String[] args) {
        File1[] tes = new File1[5];

        for (int i = 0; i < 5; i++) {
            tes[i] = new File1("Ini tes ke-"+i);
        }

        for (File1 f : tes) {
            System.out.println(f.getData());
        }
    }
}
