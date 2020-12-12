import java.util.*;
public class transitwoes {
    public static void main(String[] args) {
        Scanner in  = new Scanner(System.in);
        int s = in.nextInt();
        int t = in.nextInt();
        int n = in.nextInt();

        int[] walk = new int[n+1];
        int[] ride = new int[n];
        int[] intervals = new int[n];
        
        for(int i = 0; i < walk.length; ++i){
            walk[i] = in.nextInt();
        }
        
        for(int i = 0; i < ride.length; ++i){
            ride[i] = in.nextInt();
        }
        
        for(int i = 0; i < intervals.length; ++i){
            intervals[i] = in.nextInt();
        }

        
        for(int i = 0; i < ride.length; ++i){
            s += walk[i];
            while(s % intervals[i] != 0){
                s++;
            }
            s += ride[i];            
        }
        
        s += walk[walk.length - 1];
        if(s > t){
            System.out.println("no");
        }else{
            System.out.println("yes");
        }
    }
}
}
