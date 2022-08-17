#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define MOD 1e9+7
#define pb push_back
#define mp make_pair
#define inf 1e18
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define T int t;cin>>t;while(t--)
using namespace std;

// ll solve(ll a[],int n,int k,ll x,int l,vector<vector<ll>>dp){
//     if(dp[n][k]!=-1){
//         return dp[n][k];
//     }
//     else{
//         if(n==l)
//             return dp[n][k]= a[n-1];
//         if(n<l)    
//             return dp[n][k]= 0;

//         if(k>0){
//             return dp[n][k]=min(x+solve(a,n-1,k-1,x,l+1,dp),min(a[n-1]+solve(a,n-1,k,x,l,dp),a[l]+solve(a,n,k,x,l+1,dp)));
//         }
//         else{
//             return dp[n][k]=min(a[n-1]+solve(a,n-1,k,x,l,dp),a[l]+solve(a,n,k,x,l+1,dp));
//         }
//     }
// }


// int main()
// {
// 	fast
// 	T
// 	{
// 		int n,k;
//         cin>>n>>k;
//         ll x;
//         cin>>x;
//         vector< vector<ll> >dp(n,vector<ll>(k,-1));

//         // for(int i=0;i<=n;i++){
//         //     for(int j=0;j<=k;j++){
//         //         dp[i][j]=-1;
//         //     }
//         // }
//         ll a[n];
//         for(int i=0;i<n;i++)
//             cin>>a[i];

//         cout<<solve(a,n,k,x,0,dp)<<endl;
// 	}
// 	return 0;
// }

int main(){
    fast
    T
    {
        int n,k;
        cin>>n>>k;
        ll x;
        cin>>x;

        vector<ll> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

            ll ans=0;
            sort(a.begin(),a.end());

            while(a.size()>1 && k>0){
                int s=a.size();
                ll sm=a[s-1]+a[s-2];
                if(x<=sm){
                    a.pop_back();
                    a.pop_back();
                    k--;
                    ans+=x;
                }     
                else break;            
            }
            for(int i=0;i<a.size();i++){
                ans+=a[i];
            }
            cout<<ans<<endl;
    }
    return 0;
}
