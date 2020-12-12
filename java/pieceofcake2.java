import java.util.*;
public class pieceofcake2 {
    public static void main(String[] args) {
        Scanner in  = new Scanner(System.in);
        
        int total = in.nextInt();
        int x = in.nextInt();
        int y = in.nextInt();
        
        if(total - x > x){
            x = total - x;
        }
        
        if(total - y > y){
            y = total - y;
        }
        
        int volume = x * y * 4;
        
        
        System.out.println(volume);
    }
}
}
