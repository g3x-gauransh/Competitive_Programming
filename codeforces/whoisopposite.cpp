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
        ll a,b,c;
        cin>>a>>b>>c;
        ll d=2*abs(a-b);
        if(c>d || a>d || b>d){
            cout<<"-1"<<endl;
        }
        else{
            ll diff=abs(a-b);
            ll ans=(c+diff)%(2*diff);
            if(ans==0)  
                ans=2*diff;
            cout<<ans<<endl;
        }
	}
	return 0;
}
