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
        int n;
        cin>>n;
        vector<ll> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];

        ll sum=0;
        for(int i=0;i<n;i++)
            sum+=a[i];

        int countodd=0;
        for(int i=0;i<n;i++){
            if(a[i]&1)
                countodd++;
        }


        // if(sum&1 && countodd==1)
        cout<<countodd/2<<endl;
	}
	return 0;
}
