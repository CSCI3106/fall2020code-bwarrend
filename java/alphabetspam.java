import java.util.*;
public class alphabetspam {
    public static void main(String[] args) {
        Scanner io = new Scanner(System.in);
        
        String input = io.nextLine();
        
        double whitespaces = 0;
        double lowercases = 0;
        double uppercases = 0;
        double symbols = 0;
        
        for(int i = 0; i < input.length(); ++i){
           char currentChar = input.charAt(i);
           int thatChar = what(currentChar);
           
           switch(thatChar){
               case 1: whitespaces++; break;
               case 2: lowercases++; break;
               case 3: uppercases++; break;
               case 4: symbols++; break;
           }
        }
        
        System.out.println(whitespaces / input.length());
        System.out.println(uppercases / input.length());
        System.out.println(lowercases / input.length());
        System.out.println(symbols / input.length());
    }
    
    public static int what(char c){
        int returnChar = 0;
        if (c == '_'){
            returnChar = 1;
        }else if(c >= 65 && c <= 90){
            returnChar = 2;
        }else if(c >= 97 && c <=122){
            returnChar = 3;
        }else{
            returnChar = 4;
        }        
        return returnChar;
    }   
}