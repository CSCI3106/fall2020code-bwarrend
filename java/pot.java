import java.util.*;
public class pot {
    public static void main(String[] args) {
        Scanner in  = new Scanner(System.in);
        
        int N = in.nextInt();
        
        int total = 0;
        
        for(int i = 0; i < N; ++i){
            total += format(in.nextInt());
        }
        
        System.out.println(total);
        
        
    }
    
    public static int format(int num){
        String numS = String.valueOf(num);
        String last = "" + numS.charAt(numS.length()-1);
        double numD = Double.parseDouble(numS);
        numD /= 10;   
        num = (int)Math.floor(numD);
        
        int lastI = Integer.parseInt(last);
        
        return (int)Math.pow((double)num, (double)lastI);
    }
}