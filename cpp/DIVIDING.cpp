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
	//T
	//{
        ll n;
        cin>>n;
        vector<ll> c;
        ll sum=0;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            sum+=x;
            c.pb(x);
        }

        int flag=0;

        for(ll i=0;i<=n;i++){
            if(i*i+i-2*sum==0){
                flag=1;
                break;
            }
        }
        
        if(flag==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

	//}
	return 0;
}
