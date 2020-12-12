import java.util.*;
public class batterup {
    public static void main(String[] args) {
        Scanner io = new Scanner(System.in);
        
        int N = io.nextInt();
        int atBats = N;
        int slug = 0;
        
        for(int i =0; i < N; ++i){
            int current = io.nextInt();
            if(current == -1){
                atBats--;
            }else{
                slug += current;
            }
        }
        
        System.out.println((double)slug/atBats);
    }
}