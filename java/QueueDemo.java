import java.util.*;
  
public class QueueDemo {
    public static void main(String args[])
    {
        // Creating an empty PriorityQueue
        PriorityQueue<String> queue = new PriorityQueue<String>();
  
        // Use add() method to add elements into the Queue
        queue.add("This");
        queue.add("is");
        queue.add("java");
        queue.add("programming");
  
        // Displaying the PriorityQueue
        System.out.println("PriorityQueue: " + queue);
  
        // Creating an iterator
        Iterator value = queue.iterator();
  
        // Displaying the values after iterating through the queue
        System.out.println("The iterator values are: ");
        while (value.hasNext()) {
            System.out.println(value.next());
        }
    }
}