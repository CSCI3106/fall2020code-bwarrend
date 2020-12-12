import java.util.*;
public class exam {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        
        int friendsCorrect = Integer.parseInt((in.nextLine()));
        int possibleCorrect = 0;
        
        String myAnswers = in.nextLine();

        String hisAnswers = in.nextLine();

        
        int together = 0;
        
        for(int i = 0; i < myAnswers.length(); ++i){
            if(myAnswers.charAt(i) == hisAnswers.charAt(i)){
                together++;
            }
        }
        
        if(together <= friendsCorrect){
            possibleCorrect = together + myAnswers.length() - friendsCorrect;
        }
        
        if(together > friendsCorrect){
            possibleCorrect = friendsCorrect + myAnswers.length() - together;
        }
        
        System.out.println(possibleCorrect);
    }
}