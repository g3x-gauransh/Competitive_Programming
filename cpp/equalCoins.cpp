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
		ll x,y;
        cin>>x>>y;
        if((x==0 && y&1) || (x&1 && y==0)){
            cout<<"No"<<endl;
            continue;
        }

        if(x%2==1)
            cout<<"No"<<endl;
        else 
            cout<<"Yes"<<endl;
	}
	return 0;
}
