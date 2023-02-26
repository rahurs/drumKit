import java.util.*;
class functInfo{
//     // public static 
//     public static void printName(String name){
//         System.out.println(name);
//         // return;
    // }
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        // int sn=sc.nextInt();
        // String name = sc.next();
        // printName(name);
        int x = 1 , y = 2 , next = 0;
        for(int i = 0;i<10;i++){
            if(i<=1)
            next = i;
            {
                next = x+y;
                x = y;
                y = next;
            }
            System.out.println(next);
        }
    }
}