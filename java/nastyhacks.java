import java.util.*;
public class nastyhacks {
    public static void main(String[] args) {
        Scanner io = new Scanner(System.in);
        int N = io.nextInt();
        
        for(int i = 0; i < N; ++i){
            int a = io.nextInt();
            int b = io.nextInt();
            int c = io.nextInt();
            
            if(a + c < b){
                System.out.println("advertise");
            }else if(a + c > b){
                System.out.println("do not advertise");
            }else{
                System.out.println("does not matter");
            }
        }
    }
}