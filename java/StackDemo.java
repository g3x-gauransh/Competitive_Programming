 import java.util.*;
import java.util.Stack;
  
public class StackDemo {
    public static void main(String args[])
    {
        Stack<String> stack = new Stack<String>();
  
        stack.add("Hello");
        stack.add("This");
        stack.add("is ");
        stack.add("Java");
        stack.add("Programming");
  
        System.out.println("Stack: " + stack);
  
        Iterator value = stack.iterator();
  
        
        System.out.println("The iterator values are: ");
        while (value.hasNext()) {
            System.out.println(value.next());
        }
    }
}
