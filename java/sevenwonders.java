import java.util.*;
public class sevenwonders {
    public static void main(String[] args) {
        Scanner input  = new Scanner(System.in);        
        String cards = input.nextLine();
        
        int Ts = 0;
        int Cs = 0;
        int Gs = 0;        
        
        for(int i = 0; i < cards.length(); ++i){
            if(cards.charAt(i) == 'T'){
                Ts++;
            }else if(cards.charAt(i) == 'C'){
                Cs++;
            }else{
                Gs++;
            }
        }
        
        int setPoints = 7 * Math.min(Cs,Math.min(Ts, Gs));
        double total = Math.pow(Ts, 2) + Math.pow(Cs, 2) + Math.pow(Gs, 2) + setPoints;
        System.out.println((int)total);
    }
}
}
