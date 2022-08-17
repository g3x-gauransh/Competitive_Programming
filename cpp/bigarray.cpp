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
        ll n,s;
        cin>>n>>s;
        ll ts=(n*(n+1))/2;
        if(s<ts && s>=ts-n){
            cout<<ts-s<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
        //cout<<ts<<endl;
	}
	return 0;
}
