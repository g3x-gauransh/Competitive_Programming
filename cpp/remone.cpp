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
        vector<ll>a(n),b(n-1);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++){
            cin>>b[i];
        }

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        int m=n-1;
        
        ll d1=abs(a[0]-b[0]);
        ll d2=abs(a[n-1]-b[m-1]);

        cout<<min(d1,d2)<<endl;
	}
	return 0;
}
