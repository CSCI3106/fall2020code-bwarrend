import java.util.*;
public class modulo {
    public static void main(String[] args) {
        Scanner io = new Scanner(System.in);
        
        boolean[] unique = new boolean[42];
        
        for(int i = 0; i < unique.length; ++i){
            unique[i] = false;
        }
        
        for(int i = 0; i < 10; ++i){
            unique[io.nextInt() % 42] = true;
        }
        
        int total = 0;
        
        for(int i = 0; i < unique.length; ++i){
            if(unique[i]){
                total++;
            }
        }
        
        System.out.println(total);
    }
}