#include<bits/stdc++.h>
using namespace std;


int main(){
    int dp[1000];
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(i==0){
            dp[i]=1;
        }
        else{
            if(arr[i]>arr[i-1]){
                dp[i]=dp[i-1]+1;
            }
            else{
                dp[i]=1;
            }
        }
    }
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        mx=max(dp[i],mx);
    }
    cout<<mx;
    return 0;
}