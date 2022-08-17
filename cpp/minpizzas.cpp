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

ll gcd(ll a,ll b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}

int main()
{
	fast
	T
	{
		ll n,k;
        cin>>n>>k;
        ll ans=0;
        if(n%k!=0){
            ans=(n*k)/gcd(n,k);
            ans/=k;
        }
        else{
            ans=n/k;
        }
        cout<<ans<<endl;
	}
	return 0;
}