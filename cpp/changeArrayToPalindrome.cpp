#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=0;
    int r=n-1;
    int count=0;
    while(l<=r){
        if(arr[l]==arr[r]){
            l++;
            r--;
        }
        else if(arr[l]<arr[r]){
            l++;
            arr[l]+=arr[l-1];
            count++;
        }
        else{
            r--;
            arr[r]+=arr[r+1];
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}