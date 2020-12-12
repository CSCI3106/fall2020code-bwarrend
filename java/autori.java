import java.util.*;
public class autori {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String inp = s.nextLine();
        String outp = "" + Character.toUpperCase(inp.charAt(0));
        int index = 0;
        
        for(int i = 0; i < inp.length(); i++){
            if(inp.charAt(i) == '-'){
                outp += Character.toUpperCase(inp.charAt(i+1));
            }
        }
        
        System.out.println(outp);
    }    
}
}
