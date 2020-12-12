import java.util.*;
public class grassseed {
    public static void main(String[] args) {
        Scanner io = new Scanner(System.in);
        double pricePer = io.nextDouble();
        int N = io.nextInt();
        
        double total = 0;
        
        for(int i = 0; i < N; ++i){
            total += io.nextDouble() * io.nextDouble() * pricePer;
        }
        
        System.out.println(total);
    }
}