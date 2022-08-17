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

int main()
{
	fast
	T
	{
        ll n;
        cin>>n;
        map <ll,ll> a;
            for(ll i=0;i<n;i++)
            {
                ll x;
                cin>>x;
                a[x]++;
            }
        if(n<=2){
            cout<<"0"<<endl;
        }
        else{
            ll mx=LONG_LONG_MIN;
            for(auto it:a){
                mx=max(it.second,mx);
            }
            if(mx==1)
                cout<<n-2<<endl;
            else
                cout<<n-mx<<endl;
        }
	}
	return 0;
}
