import java.util.*;
public class cetvrta {
    public static void main(String[] args) {
        Scanner io = new Scanner(System.in);
        
        int x1 = io.nextInt();
        int y1 = io.nextInt();
        int x2 = io.nextInt();
        int y2 = io.nextInt();
        int x3 = io.nextInt();
        int y3 = io.nextInt();
        
        int x = 0;
        int y = 0;
        
        if (x1 == x2 && x1 != x3){
            x = x3;
        }else if(x1 == x3 && x1 != x2){
            x = x2;
        }else{
            x = x1;
        }
        
        if (y1 == y2 && y1 != y3){
            y = y3;
        }else if(y1 == y3 && y1 != y2){
            y = y2;
        }else{
            y = y1;
        }
        
        System.out.println(x + " " + y);
    }
}