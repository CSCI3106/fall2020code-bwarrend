import java.util.*;
public class hangingout {
    public static void main(String[] args) {
        Scanner io = new Scanner(System.in);
        
        int current = 0;
        int overflow = 0;
        int max = io.nextInt();
        int events = io.nextInt();
        
        for(int i = 0; i < events; ++i){
            String tag = io.next();
            int num = io.nextInt();
            
            if (tag.equals("enter")){
                if(current + num <= max){
                    current += num;
                }else{
                    overflow ++;
                }  
            }else{
                current -= num;
            }                      
        }        
        System.out.println(overflow);
    }
}