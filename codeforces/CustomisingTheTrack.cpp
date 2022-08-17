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
        int n;
        cin>>n;
        vector<ll> a;
        ll sum=0;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            sum+=x;
            a.pb(x);
        }

        ll avg= sum/n;

        for(int i=0;i<n;i++){
            a[i]=avg;
        }
        ll diff=sum-(avg*n);
        if(avg*n!=sum){
            for(int i=0;i<diff;i++)
                a[i]++;
        }
        ll ans = diff*(n-diff);
        cout<<ans<<endl;
	}
	return 0;
}
