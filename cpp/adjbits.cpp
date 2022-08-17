#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll output[101][101][2];
#define mod 1000000007

ll adjbc(int n,int k,int first){
    
    if(output[n][k][first] >= 0){
        return output[n][k][first];
    }
    
    if(n == 1){
        if(k == 0){
            output[n][k][first] = 1;
            return 1;
        }
        output[n][k][first] = 0;
        return 0;
    } 
    if(k < 0){
        output[n][k][first] = 0;
        return 0;
    }
     
    if(first == 1){
        ll ans1 = adjbc(n-1,k-1,1);
        ll ans2 = adjbc(n-1,k,0);
        output[n][k][first] = (ans1+ans2)%mod;
    }
   
    if(first == 0){
        ll ans1 = adjbc(n-1,k,1);
        ll ans2 = adjbc(n-1,k,0);
        output[n][k][first] = (ans1+ans2)%mod;
    }
  
    return output[n][k][first];
}

ll getCount(int n,int k){

    ll sum1 = adjbc(n,k,1);
    ll sum2 = adjbc(n,k,0);
    ll ans = (sum1+sum2)%mod;
    return ans;
}

int main()
{
    int t;
    cin >> t;
    for(int i=0;i<101;i++){
        for(int j=0;j<101;j++){
            for(int k=0;k<2;k++){
                output[i][j][k] = -1;
            }
        }
    }
    while(t--){
        int i ,n,k;
        cin >> i >> n >> k;
        ll res = getCount(n,k);
        cout << i << " " << res << endl;
    }
    return 0;
}