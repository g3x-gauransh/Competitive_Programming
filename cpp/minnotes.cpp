#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define T ll t;cin>>t;while(t--)
#define endl '\n'
#define vin vector<ll>
#define vit vector <ll> ::iterator
#define fi(i,n) for(ll i=0;i<n;i++)
#define fo(i,n) for(ll i=1;i<=n;i++) 
#define pb(x) push_back(x)
#define all(v) v.begin(),v.end()
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

ll gcd(ll a,ll b){
    if(a==0)  
        return b;
    return gcd(b%a,a);
}

int main()
{
	FAST
	T
	{
        ll n;
        cin>>n;
        vector<ll> a;
        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            a.push_back(x);
        }

        if(n==1){
            cout<<"1"<<endl;
        }
        else{
            ll hcf[n];
            ll f[n];
            ll b[n];
            
            //front gcd

            f[0]=a[0];
            for(ll i=1;i<n;i++){    
                f[i]=gcd(f[i-1],a[i]);
            }
            
            //back gcd

            b[n-1]=a[n-1];
            for(ll i=n-2;i>=0;i--){
                b[i]=gcd(b[i+1],a[i]);
            }
            //hcf array
            hcf[0]=b[1];
            hcf[n-1]=f[n-2];

            for(ll i=1;i<n-1;i++){
                hcf[i]=gcd(f[i-1],b[i+1]);
            }


            ll sum=0;
            for(int i=0;i<n;i++){
                sum+=a[i];
            }
            ll ans= LONG_LONG_MAX;
            for(int i=0;i<n;i++){
                ll s= (sum-a[i])/hcf[i] +1;
                ans=min(s,ans);
            }
            cout<<ans<<endl;
        }	
    }
	return 0;
}