#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define MOD 10000007
#define pb push_back
#define mp make_pair
#define inf 1e18
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define T int t;cin>>t;while(t--)
using namespace std;

ll highestPowerof2(ll n)
{
   ll p = (ll)log2(n);
   return (ll)pow(2, p);
}

int main()
{
	fast
	T
	{
        ll n;
        cin>>n;
		if(n==1 || n==2)
			cout<<"1"<<endl;
		else{
			ll last=highestPowerof2(n);
			ll sec=last/2;

			ll ans=max(last-sec,n-last+1);
			cout<<ans<<endl;
		}
	}
	return 0;
}
