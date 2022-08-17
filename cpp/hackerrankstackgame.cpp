#include<bits/stdc++.h>
using namespace std;

int twoStacks(int maxSum, vector<int> a, vector<int> b) {
    int a1=0;
    int a2=0;
    
    int sum=0;
    bool lastindex=true;
    int count=0;
    
    
    while(a1<a.size() && a2<b.size()){
        if(sum>maxSum){
            count--;
            break;
        }
        if(a[a1]>b[a2])
        {
            lastindex=true;
            sum+=a[a1++];
            count++;
        }
        else{
            lastindex=false;
            sum+=b[a2++];
            count++;
        }
    }
    
    if(a1==a.size() && a2==b.size()){
        return count;
    }
    else{
        if(lastindex){
            sum-=a[--a1];
            while(a2<b.size()){
                if(sum>maxSum){
                    count--;
                    break;
                }
                    
                sum+=b[a2++];
                count++;
            }
        }
        else{
            sum-=b[--a2];
            while(a1<a.size()){
                if(sum>maxSum){
                    count--;
                    break;
                }
                    
                sum+=a[a1++];
                count++;
            }
        }
        return count;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        long long maxSum;
        cin>>maxSum;
        vector<int> a(n),b(m);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<m;i++)
            cin>>b[i];

        cout<<twoStacks(maxSum,a,b)<<endl;
    }
    return 0;
}