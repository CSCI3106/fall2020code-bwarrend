import java.util.*;
public class heartrate {
    public static void main(String[] args) {
        Scanner io = new Scanner(System.in);
        
        int N = io.nextInt();
        
        for(int i = 0; i < N; ++i){
            int b = io.nextInt();
            double p = io.nextDouble();
            
            System.out.print((60*(b-1)/p) + " ");
            System.out.print((60*b/p) + " ");
            System.out.print((60*(b+1)/p) + "\n");
            
        }
    }
}