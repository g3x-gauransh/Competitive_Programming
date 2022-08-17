#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define MOD 998244353
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
		ll n;
        cin>>n;
        ll p=1,q;
        if(n%2==0)

        if(n%4==0){
            q=1;
            p=n/4;
            p%=MOD;

            p*=(n+1);
            p%=MOD;

            p*=(n+1);
            p%=MOD;
        }
        else{
            q=2;
            p=n/2;
            p%=MOD;

            p*=(n+1);
            p%=MOD;

            p*=(n+1);
            p%=MOD;
        }
        else{
            q=1;

            p*=(n+1)/2;
            p%=MOD;

            p*=(n+1)/2;
            p%=MOD;

            p*=n;
            p%=MOD;
        }

        ll inv=0;

        if(q==1){
            inv=1;
        }
        else if(q==2){
            inv=499122177;
        }

        ll ans=p*inv;
        ans%=MOD;
        cout<<ans<<endl;

	}
	return 0;
}
