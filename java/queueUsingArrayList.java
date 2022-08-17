
import java.util.ArrayList;
import java.util.*;
public class queueUsingArrayList {
    private ArrayList<String> myArray = new ArrayList<String>();
    public void push(String n){
        myArray.add(n);
    }
    public void pop(){
        myArray.remove(0);
    }
    public int size(){
        return myArray.size();
    }
    public String front(){
        return myArray.get(0);
    }
    public String toString() {
		return "Stack [elements=" + myArray + "]";
	}

    static public void main(String[] args){
        queueUsingArrayList q = new queueUsingArrayList();
        q.push("a");
        q.push("b");
        q.push("c");
        q.push("d");
        System.out.println("Size of queue:"+q.size());
        System.out.println("front element of queue:"+q.front());
        q.pop();
        System.out.println("stack after 1st pop:"+q.toString());
        System.out.println("Size of queue:"+q.size());
        System.out.println("Front:"+q.front());
        q.push("e");
        System.out.println("stack after 2nd pop:"+q.toString());
        System.out.println("Size of queue:"+q.size());
    }
}
