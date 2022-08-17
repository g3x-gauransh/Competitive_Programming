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

ll gcd(ll a,ll b){
    if(b==0)    
        return a;
    
    return gcd(b,a%b);
}

int main()
{
	fast
	T
	{
        ll x,y;
        cin>>x>>y;
        ll count=0;
        if(gcd(x,y)>1)
            count=0;
        else if(gcd(x+1,y)>1 || gcd(x,y+1)>1)
            count=1;
        else
            count=2;

        cout<<count<<endl;
	}
	return 0;
}
