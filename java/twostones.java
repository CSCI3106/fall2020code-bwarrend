import java.util.*;
public class twostones {
    public static void main(String[] args) {
        Scanner input  = new Scanner(System.in);
        int N = input.nextInt();
        
        if(N%2 == 0){
            System.out.println("Bob");
        }else{
            System.out.println("Alice");
        }        
    }
}
