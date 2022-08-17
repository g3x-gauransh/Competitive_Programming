#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define MOD 1e9+7
#define pb push_back
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define T int t;cin>>t;while(t--)
using namespace std;


int main()
{
	fast
	T
	{
        ll n,m;
        cin>>n>>m;
        ll count=0;
        vector<ll> mod(n+1,1);

        for(int i=2;i<=n;i++){
            ll x=m%i;
            count+=(mod[x]);

            for(int j=x;j<=n;j+=i){
                mod[j]++;
            }
        }
        cout<<count<<endl;
    }
	return 0;
}
