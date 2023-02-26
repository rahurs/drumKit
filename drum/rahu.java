import java.util.*;
public class rahu{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("enter number:-");
        int num = sc.nextInt();
        System.out.print("enter column number");
        int num1=sc.nextInt();
        for(int i = 1;i<=num;i++){
            for(int j = 1;j<=num1;j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
}