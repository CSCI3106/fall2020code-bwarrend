import java.util.*;
public class bijele {
    public static void main(String[] args) {
        Scanner io = new Scanner(System.in);
        
        int king = io.nextInt();
        int queen = io.nextInt();
        int rooks = io.nextInt();
        int bishops = io.nextInt();
        int knights = io.nextInt();
        int pawns = io.nextInt();
        
        if(king != 1){
            System.out.print(-1*(king - 1) + " ");
        }else{
            System.out.print("0 ");
        }
        
        if(queen != 1){
            System.out.print(-1*(queen - 1) + " ");
        }else{
            System.out.print("0 ");
        }
        
        if(rooks != 2){
            System.out.print(-1*(rooks - 2) + " ");
        }else{
            System.out.print("0 ");
        }
        
        if(bishops != 2){
            System.out.print(-1*(bishops - 2) + " ");
        }else{
            System.out.print("0 ");
        }
        
        if(knights != 2){
            System.out.print(-1*(knights - 2) + " ");
        }else{
            System.out.print("0 ");
        }
        
        if(pawns != 8){
            System.out.print(-1*(pawns - 8) + " ");
        }else{
            System.out.print("0 ");
        }
    }
}