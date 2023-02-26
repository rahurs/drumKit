// // // // // // Online Java Compiler
// // // // // // Use this editor to write, compile and run your Java code online
// // // // // import java.util.*;
// // // // // class HelloWorld {
// // // // //     public static void main(String[] args) {
// // // // //         // System.out.println("Hello, World!");
// // // // //         // Scanner sc = new Scanner(System.in);
// // // // //         // int n = sc.nextInt();
// // // // //         for(int i =1;i<=5;i++){
// // // // //             for(int j = 1;j<=i;j++){
// // // // //                 if((i+j) % 2 == 0){
// // // // //                     System.out.print("1");
// // // // //                 }else{
// // // // //                     System.out.print("0");
// // // // //                 }
// // // // //             }
// // // // //             System.out.println();
// // // // //         }
// // // // //     }
// // // // // }
// // // // import java.util.*;
// // // // class HelloWorld{
// // // //     public static void main(String []args){
// // // //         int n = 4;
// // // //         for(int i = 0;i<n;i++){
// // // //             for(int j = 0;j<=i;j++){
// // // //                 System.out.print("*");
                
// // // //             }
// // // //             for(int k = 0;k<2*(n-i-1);k++){
// // // //                 System.out.print(" ");
// // // //             }
// // // //             for(int j = 0;j<=i;j++){
// // // //                 System.out.print("*");
                
// // // //             }
// // // //             System.out.println();
// // // //         }
// // // //         for(int i = n;i>=1;i--){
// // // //             for(int j = i;j>=1;j--){
// // // //                 System.out.print("*");
// // // //             }
// // // //             for(int k = 1;k<=2*(n-i);k++){
// // // //                 System.out.print(" ");
// // // //             }
// // // //             for(int j = i;j>=1;j--){
// // // //                 System.out.print("*");
// // // //             }
// // // //             System.out.println();
// // // //         }
// // // //     }
// // // // }
// // // class HelloWorld{
// // 7//   public static void main(String[] args){
// // //       int n = 5;
// // //       for(int i = 1;i<=n;i++){
// // //         for(int j = 1;j<=n-i;j++){
// // //             System.out.print("  ");
// // //         }
// // //         for(int k = 1;k<=n;k++){
// // //             System.out.print("* ");
// // //         }
// // //         System.out.println();
// // //       }
// // //   }
// // // }
// // class HelloWorld{
// //   public static void main(String[] args){
// //     int n = 5;
// //     for(int i = 1;i<=5;i++){
// //         for(int k = 1;k<=n-i;k++){
// //             System.out.print(" ");
// //         }
// //         for(int j = i;j>=1;j--){
// //             System.out.print(j);
// //         }
// //         for(int l = 2;l<=i;l++){
// //             System.out.print(l);
// //         }
// //         System.out.println();
// //     }
// //   }

// // }
import java.util.*;
class HelloWorld{
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i = 1;i<=n;i++){
            for(int j = 1;j<=i;j++){
                if(j==1 || j==i){
                    System.out.print("*");
                }
                else{
                    System.out.print(" ");
                }
            }
            for(int k = 1;k<=2*(n-i);k++){
                System.out.print(" ");
            }
             for(int j = 1;j<=i;j++){
                if(j==1 || j==i){
                    System.out.print("*");
                }
                else{
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
        for(int i = n;i>=1;i--){
            for(int j = i;j>=1;j--){
                if(j==i || j==1){
                    System.out.print("*");
                }else{
                    System.out.print(" ");
                }
            }
            for(int k = 1;k<=2*(n-i);k++){
                System.out.print(" ");
            }
            for(int j = i;j>=1;j--){
                if(j==i || j==1){
                    System.out.print("*");
                }else{
                    System.out.print(" ");
                }}  
            System.out.println();
        }
  
  }
}
    