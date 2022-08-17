import java.util.*;
public class StringAndStringBuffers {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("1. String");
        System.out.println("2. String buffer");
        int n=sc.nextInt();
        switch(n){
            case 1:{
                System.out.println("1.length");
                System.out.println("2.charAt");
                System.out.println("3.toLowerCase");
                System.out.println("4.concat");
                int o1=sc.nextInt();
                switch(o1){
                    case 1:{
                        System.out.println("Input String:");
                        sc.nextLine();
                        String s= sc.nextLine();
                        int l=s.length();
                        System.out.println("Length:"+l);
                    }
                    break;
                    case 2:{
                        System.out.println("Input String:");
                        sc.nextLine();
                        String s= sc.nextLine();
                        System.out.println("Enter position");
                        sc.nextLine();
                        int i=sc.nextInt();
                        int x=s.charAt(i);
                        System.out.println("Char at "+i+":"+x);
                    }
                    break;
                    case 3:{
                        System.out.println("Input String:");
                        sc.nextLine();
                        String s= sc.nextLine();
                        s.toLowerCase();
                        System.out.println(s);
                    }
                    break;
                    case 4:{
                        System.out.println("Input String1:");
                        sc.nextLine();
                        String s1= sc.nextLine();
                        System.out.println("Input String2:");
                        sc.nextLine();
                        String s2= sc.nextLine();
                        s1.concat(s2);
                        System.out.println("Concated String:"+s1);
                    }
                    break;
                }
            }
            break;
            case 2:{
                System.out.println("1.append");
                System.out.println("2.insert");
                System.out.println("3.reverse");
                System.out.println("4.delete");
                int o2=sc.nextInt();
                switch(o2){
                    case 1:{
                        System.out.println("Enter String 1:");
                        StringBuffer s= new StringBuffer();
                        sc.nextLine();
                        s.append(sc.nextLine());
                        
                        System.out.println("Enter String 2:");
                        StringBuffer s2= new StringBuffer();
                        s2.append(sc.nextLine());
                        s.append(s2);
                        System.out.println("Appended String:"+s);
                    }
                    break;
                    case 2:{
                        System.out.println("Enter String 1:");
                        StringBuffer s= new StringBuffer();
                        sc.nextLine();
                        s.append(sc.nextLine());
                        
                        System.out.println("Enter String 2:");
                        StringBuffer s2= new StringBuffer();
                        s2.append(sc.nextLine());
                        System.out.println("Enter Position:");
                        int i=sc.nextInt();
                        s.insert(i,s2);
                        System.out.println(s);
                    }
                    break;
                    case 3:{
                        System.out.println("Enter String 1:");
                        StringBuffer s= new StringBuffer();
                        sc.nextLine();
                        s.append(sc.nextLine());
                        s.reverse();
                        System.out.println("reversed String:"+s);
                    }
                    break;
                    case 4:{
                        System.out.println("Enter String 1:");
                        StringBuffer s= new StringBuffer();
                        sc.nextLine();
                        s.append(sc.nextLine());

                        System.out.println("Enter start and end index:");
                        int l1=sc.nextInt();
                        int l2=sc.nextInt();
                        s.delete(l1, l2);
                        System.out.println(s);
                    }
                    break;
                }
            }
        }
        sc.close();
    }
}
