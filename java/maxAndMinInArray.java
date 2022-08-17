import java.util.*;

public class maxAndMinInArray {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter size:");
        int n= sc.nextInt();
        System.out.println("Enter Array:");
        int[] a= new int[n];
        for(int i=0;i<n;i++){
            a[i]=sc.nextInt();
        }

        int max=Integer.MIN_VALUE;
        int min=Integer.MAX_VALUE;

        for(int i=0;i<n;i++){
            if(a[i]>max)
                max=a[i];
            if(a[i]<min)
                min=a[i];
        }

        System.out.println("Max Value:"+max);
        System.out.println("Max Value:"+min);
        sc.close();
    }
}
