import java.util.*;

class A{
    public void show(){
        System.out.println("java");
    }
}
public class dot {
    public static void main(String ... args){
        A a = new A();
        {
            public void show(){
                System.out.println("Java programming");
            }
        };
        a.show();
    }
}
