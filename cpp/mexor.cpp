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

bool isPowerOfTwo(ll n)
{
   if(n==0)
   return false;
 
   return (ceil(log2(n)) == floor(log2(n)));
}

int main()
{
	fast
	T
	{
		ll x;
        cin>>x;
        if(x==0)    
            cout<<"1"<<endl;
        else if(x==1 || x==2)
            cout<<"2"<<endl;
        else{
            ll ans=highestPowerof2(x);
            if(isPowerOfTwo(x+1)){
                cout<<x+1<<endl;
            }
            else
                cout<<ans<<endl;
        }
        
	}
	return 0;
}
