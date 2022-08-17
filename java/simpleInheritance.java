import java.util.*;
public class simpleInheritance extends base{
    public static void main(String[] args){
        simpleInheritance s= new simpleInheritance();
        int vol=s.l*s.b*s.h;
        System.out.println("Volume:"+vol);
    }
}

class base{
    int l=2;
    int b=3;
    int h=5;

}
