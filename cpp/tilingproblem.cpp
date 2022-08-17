#include<iostream>
using namespace std;

int solve(int n){
    if(n==0){
        return 1;
    }
    if(n<0)
        return 0;
    
    return solve(n-2)+solve(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<solve(n);
    // int dp[100];
    // for(int i=0;i<=n;i++){
    //     if(i==0){
    //         dp[i]=1;
    //     }
    //     else if(i==1){
    //         dp[i]=1;
    //     }
    //     else{
    //         dp[i]=dp[i-1]+dp[i-2];
    //     }
    // }
    // cout<<dp[n];
}