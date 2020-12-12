import java.util.*;
public class cold {
    public static void main(String[] args) {
        Scanner in  = new Scanner(System.in);
        int N = in.nextInt();
        
        int below0 = 0;
        
        for(int i = 0; i < N; ++i){
            if(in.nextInt() < 0){
                below0++;
            }
        }
        
        System.out.println(below0);
    }
}
}
