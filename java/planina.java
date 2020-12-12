import java.util.*;
public class planina {
    public static void main(String[] args) {
        Scanner in  = new Scanner(System.in);
        
        int N = in.nextInt();
        
        int total = 2;
        
        for(int i = 0; i < N; ++i){
            total *= 2;
            --total;
        }
        System.out.println(total * total);
    }
}
}
