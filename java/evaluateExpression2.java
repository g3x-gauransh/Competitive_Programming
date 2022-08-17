import java.util.*;
public class evaluateExpression2 {
    public static void main(String[] args){
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter x:");
        int x=sc.nextInt();
        System.out.println("Enter b:");
        int b=sc.nextInt();
        System.out.println("Enter c:");
        int c=sc.nextInt();
        System.out.println("Enter y:");
        int y=sc.nextInt();

        int ans= c++ +(b/x)-y;

        System.out.println("Answer:"+ans);
        sc.close();
    }
}
