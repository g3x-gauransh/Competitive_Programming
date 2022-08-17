import java.util.*;

public class evaluateExpression {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a:");
        int a=sc.nextInt();
        System.out.println("Enter c:");
        int c=sc.nextInt();
        System.out.println("Enter z:");
        int z=sc.nextInt();

        int ans= (a/c)*(z/a);
        System.out.println("Answer:"+ans);
        sc.close();
    }
}
