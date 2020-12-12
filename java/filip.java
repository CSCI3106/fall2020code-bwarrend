import java.util.*;
public class filip {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String first = String.valueOf(sc.nextInt());
        String second = String.valueOf(sc.nextInt());
        
        first = "" + first.charAt(2) + first.charAt(1) + first.charAt(0);
        second = "" + second.charAt(2) + second.charAt(1) + second.charAt(0);
        
        int firstI = Integer.parseInt(first);
        int secondI = Integer.parseInt(second);
        
        int max = Math.max(firstI, secondI);
        System.out.println(max);
    }    
}