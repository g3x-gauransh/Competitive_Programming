#include<bits/stdc++.h>
using namespace std;

//int ref[1000];

int MaxSum(int arr[],int n){
    if(n<=0)
        return 0;
    //if(ref[n]!=INT_MIN)
       // return ref[n];
    return max(arr[n-1]+MaxSum(arr,n-2), MaxSum(arr,n-1)); 
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //memset(ref,INT_MIN,sizeof(ref));
    cout<<MaxSum(arr,n);
    return 0;
}