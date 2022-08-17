public class methodOverloading extends top{
    int ans;
    public void f1(){
        super.f1();
        ans=super.b*super.l*super.h;
    }
    public static void main(String[] args){
        methodOverloading m=new methodOverloading();
        m.f1();
        System.out.println("Volume:"+m.ans);
    }
}
class top{
    int l;
    int b;
    int h;
    public void f1(){
        l=2;
        b=3;
        h=5;
    }
}
