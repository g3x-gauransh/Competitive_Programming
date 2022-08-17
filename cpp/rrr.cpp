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

int main()
{
	fast
	T
	{
		ll n,k;
        cin>>n>>k;

        ll ans;

        if(k==1){
            ans=2*(n-1);
        }
        else if(k==n){
            if(n&1)
                ans=n-1;
            else
                ans=n-2;
        }
        else{
            ll diff=n-k;
            ll s=diff*(diff-1);
            ll sum=n*(n-1);
            ll d=sum-s;

            if((d/k)&1){
                ans=d/k-1;
            }
            else{
                ans=d/k;
            }
        }
        cout<<ans<<endl;
	}
	return 0;
}
