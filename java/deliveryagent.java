package java;

import java.util.*;
public class deliveryagent{
    int solve(int[] arr){
        Map<Integer,Integer> m=new HashMap<>();
        for(int i=0;i<arr.length;i++){
            Integer j=m.get(arr[i]);
            m.put(arr[i], (j==null)?1: j+1);
        }
        Integer ans=0;
        for(Map.Entry<Integer,Integer> it: m.entrySet()){
            if(it.getValue()%3==0){
                int temp=it.getValue()/3;
                ans+=temp;
                it.setValue(it.getValue()-temp*3);
            }
            if(it.second%2==0){
                int temp=it.second/2;
                ans+=temp;
                m[it.first]-=temp*2;
            }
        }
        //cout<<ans<<endl;
        // for(auto it:m){
        //     cout<<it.first<<" "<<it.second<<endl;
        // }
        for(auto it:m){
            if(it.second!=0){
                return -1;
            }
        }
        return ans;
    }
}

