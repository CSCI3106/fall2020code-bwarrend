import java.util.*;
public class datum {
    public static void main(String[] args) {
        Scanner io = new Scanner(System.in);
        
        int day = io.nextInt();
        int month = io.nextInt();
        
        Calendar cal = Calendar.getInstance();
        cal.clear();
        cal.set(2009, month-1, day);        
        
        int dayNum = cal.get(Calendar.DAY_OF_WEEK);
        
        String print = " ";
        
        switch(dayNum){
            case 1: print = "Sunday"; break;
            case 2: print = "Monday"; break;
            case 3: print = "Tuesday"; break;
            case 4: print = "Wednesday"; break;
            case 5: print = "Thursday"; break;
            case 6: print = "Friday"; break;
            case 7: print = "Saturday"; break;
        }
        
        System.out.println(print);
    }
}
