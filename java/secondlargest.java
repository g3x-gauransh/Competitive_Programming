import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class secondlargest {
    public static void main(String[] args) throws java.lang.Exception {

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        for (int i = 0; i < n; i++) {
            int temp = arr[i];
            int mx = -1;
            HashSet<Integer> set = new HashSet<>();
            while (temp != 0) {
                int r = temp % 10;
                set.add(r);
                temp = temp / 10;
                if (mx < r) // found the max digit in the number
                    mx = r;
            }
            // List<Integer> list=new ArrayList<>(set);
            // Collections.sort(list);
            // System.out.println(list);
            if(set.size()>1)
                set.remove(mx);
            Iterator<Integer> it = set.iterator();
            Integer ans=0;
            while (it.hasNext()) {
                ans = it.next();
            }
            arr[i]=ans;
        }
        for (int i = 0; i < n; i++) {
            System.out.println(arr[i]);
        }
    }

}