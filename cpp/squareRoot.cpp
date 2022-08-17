#include<bits/stdc++.h>
using namespace std;

int squareRoot(int n){
    int f=0;
    int l=n;
    int mid;
    while(f<l){
        mid=(f+l)/2;
        if(mid*mid==n){
            return mid;
        }
        else if(mid*mid>n){
            l=mid;
        }
        else{
            f=mid;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    cout<<squareRoot(n);
    return 0;
}