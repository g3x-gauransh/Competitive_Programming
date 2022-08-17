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
        int n;
        cin>>n;
        vector<ll> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        ll sum=0;
        ll mx=LONG_LONG_MIN;
        for(int i=0;i<n;i++){
            mx=max(mx,a[i]);
            sum+=a[i];
        }

        double ans=((double)(sum-mx)/(n-1)) +(double)mx;

        cout<<fixed;
        cout<<setprecision(9);
        cout<<ans<<endl;

	}
	return 0;
}
