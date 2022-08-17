#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define pb push_back
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define T int t;cin>>t;while(t--)
using namespace std;
ll MOD=1e9+7;
int main()
{
	fast
	T
	{
        ll n;
        cin>>n;
        ll x=2;
        ll y=n-1;
        ll temp=1;
        while(y>0){
            if(y%2==1){
                temp=(temp*x)%MOD;
            }
            x=(x*x)%MOD;
            y/=2;
        }
        cout<<temp<<endl;
	}
	return 0;
}
