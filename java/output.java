class math{
    public double secret=2;
}

class complexmath extends math{
    public double secret =4;
}

public class output extends complexmath{
    public double secret=6;

    public static void main(String args[]){
        math m =new output();
        System.out.print(m.secret);
    }
}

