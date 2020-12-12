import java.util.*;
public class faktor {
    public static void main(String[] args) {
        Scanner io = new Scanner(System.in);
        int a = io.nextInt();
        int b = io.nextInt();
        
        int total = a * b - a + 1;
        System.out.println(total);
    }
}