import java.util.*;
public class oddities {
    public static void main(String[] args) {
        Scanner in  = new Scanner(System.in);
        int N = in.nextInt();
        
        for(int i = 0; i < N; ++i){
            int x = in.nextInt();
            if(x % 2 == 0){
                System.out.println(x + " is even");
            }else{
                System.out.println(x + " is odd");
            }
        }
    }
}
}
