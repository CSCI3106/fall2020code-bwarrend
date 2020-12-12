
import java.util.*;
public class ladder {
    public static void main(String[] args) {
        Scanner io = new Scanner(System.in);
        
        double aL = io.nextDouble();
        double aA = Math.toRadians(io.nextDouble());
        
        double c = aL / Math.sin((double)aA);
        
        System.out.println((int)Math.ceil(c));
    }
}