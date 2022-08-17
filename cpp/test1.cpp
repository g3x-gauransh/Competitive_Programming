//[32,21,34,35,67,87,54,64,31]
#include<bits/stdc++.h>
using namespace std;

//


int main(){
    int arr[9]={555,673,989,303,211,817,549,640,321};
    for(int i=0;i<9;i++){
        set<int> s;
        int temp=arr[i];
        int mx=INT_MIN;
        while(temp>0){
            int r=temp%10;
            temp/=10;
            if(mx<r)
                mx=r;
            s.insert(r);
        }
        int t;
        set<int>::iterator it;
        if(s.size()>1)
            s.erase(mx);

        for(it=s.begin();it!=s.end();it++){
            t=*it;
        }
        arr[i]=t;
    }
    for(int i=0;i<9;i++)
        cout<<arr[i]<<" ";
    return 0;
}