import java.util.*;
public class bela {
    public static void main(String[] args) {
        Scanner io = new Scanner(System.in);
        
        int hands = io.nextInt();
        String dominantSuit = io.next();
        
        Dictionary scores = new Hashtable();
        
        scores.put("Ad", 11);
        scores.put("An", 11);
        scores.put("Kd", 4);
        scores.put("Kn", 4);
        scores.put("Qd", 3);
        scores.put("Qn", 3);
        scores.put("Jd", 20);
        scores.put("Jn", 2);
        scores.put("Td", 10);
        scores.put("Tn", 10);
        scores.put("9d", 14);
        scores.put("9n", 0);
        scores.put("8d", 0);
        scores.put("8n", 0);
        scores.put("7d", 0);
        scores.put("7n", 0);
        
        int totalScore = 0;
        
        io.nextLine();
        
        for(int i = 0; i < hands*4; ++i){

            String currentLine = io.nextLine();
            
            
            if(currentLine.charAt(1) == dominantSuit.charAt(0)){
                totalScore += (int)(scores.get("" + currentLine.charAt(0) + "d"));
            }else{
                totalScore += (int)(scores.get("" + currentLine.charAt(0) + "n"));
            }
        }
        
        System.out.println(totalScore);
    }
}