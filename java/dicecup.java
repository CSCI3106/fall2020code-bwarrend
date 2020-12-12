import java.util.*;
public class dicecup {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        
        //output will be difference + 1 numbers
        //Start at min input and go up 1  differ+1 times
        
        int d1 = 0, d2 = 0;
        
        d1 = s.nextInt();
        d2 = s.nextInt();
        
        if(d2 < d1){
            int t = d2;
            d2 = d1;
            d1 = t;
        }
        
        int diff = d2 - d1 + 1;
        d1++;
        
        for(int i = 0; i < diff; i++){
            System.out.println(d1 + i);
        }
        
        
    }    
}