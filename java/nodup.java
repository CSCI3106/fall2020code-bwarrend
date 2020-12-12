import java.util.*;
public class nodup {
    public static void main(String[] args) {
        Scanner io = new Scanner(System.in);
        String str = io.nextLine();
        String[] strA = str.split(" ");
        
        int count = 0;
        
        for(int i = 0; i < strA.length; ++i){
            for(int j = i; j < strA.length; ++j){
                if(strA[i].equals(strA[j])){
                    count++;
                }
            }
        }
        
        if(count != strA.length){
            System.out.println("no");
        }else{
            System.out.println("yes");
        }
    }
}