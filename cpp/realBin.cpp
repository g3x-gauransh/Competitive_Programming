#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define MOD 1e9+7
#define pb push_back
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define T int t;cin>>t;while(t--)
using namespace std;

bool powOfTwo(ll x){
	return x && (!(x&(x-1)));
}

int main()
{
	fast
	T
	{
		ll a,b;
		cin>>a>>b;
		if(powOfTwo(b)){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
	return 0;
}
