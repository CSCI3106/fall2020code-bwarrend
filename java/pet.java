import java.util.*;
public class pet {
    public static void main(String[] args) {
        Scanner in  = new Scanner(System.in);
        
        int winner = 0;
        int tempTotal = 0;
        int currentMax = 0;
        
        for (int i = 0; i < 5; ++i){
            tempTotal = in.nextInt() + in.nextInt() + in.nextInt() + in.nextInt();
            if (tempTotal > currentMax){
                currentMax = tempTotal;
                winner = i + 1;
            }
        }
        
        System.out.println(winner + " " + currentMax);
    }
}
}
