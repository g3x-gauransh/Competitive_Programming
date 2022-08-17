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
		int n;
        cin>>n;
        vector<ll> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll maxi=LONG_LONG_MIN;
        ll mini=LONG_LONG_MAX;
        for(int i=0;i<n;i++){
            maxi=max(maxi,a[i]);
            mini=min(mini,a[i]);        
        }
        cout<<maxi-mini<<endl;
	}
	return 0;
}
