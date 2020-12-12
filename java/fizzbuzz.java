import java.util.*;
public class fizzbuzz {
    public static void main(String[] args) {
        Scanner in  = new Scanner(System.in);
        int fizz = in.nextInt();
        int buzz = in.nextInt();
        int N = in.nextInt();
        
        for(int i = 1; i <= N; ++i){
            if (i % fizz != 0 && i % buzz != 0){
                System.out.print(i);
            }else if(i % fizz == 0){
                System.out.print("Fizz");
                if(i % buzz == 0){
                    System.out.print("Buzz");
                }
            }else{
                System.out.print("Buzz");
            }
            
            System.out.println("");
        }
    }
}