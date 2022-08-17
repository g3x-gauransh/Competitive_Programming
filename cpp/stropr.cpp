#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define inf 1e18
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define T int t;cin>>t;while(t--)
using namespace std;
typedef pair<int,int> pi;

int main()
{
	fast
	T
	{
		ll n,x,m;
        cin>>n>>x>>m;
        vector<ll> a(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }

         ll mul=((m*(m+1))/2);
        // a[2]+=((m*a[1])%MOD);
        // for(int i=3;i<=x;i++){
        //     a[i]=((mul*a[i-1])%MOD);
        // }
        // cout<<a[x]<<endl;
        if(x==2){
            ll ans=(a[x-1]*m+a[x])%MOD;
            cout<<ans<<endl;
        }
        else if(x==1){
            cout<<a[x]<<endl;
        }
        else{
            ll ans=(((a[x-1]*mul)%MOD)+a[x])%MOD;
            cout<<ans<<endl;
        }
	}
	return 0;
}
