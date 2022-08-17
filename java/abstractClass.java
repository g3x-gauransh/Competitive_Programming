public class abstractClass extends abs{
    public void m1(){
        System.out.println("Abstract class method");
    }
    public static void main(String[] args){
        abs a = new abstractClass();
        a.m1();
    }
}
abstract class abs{
    public abstract void m1();
}