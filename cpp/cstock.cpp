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
        double a,b,c,s;
        cin>>s>>a>>b>>c;
        double p=s+(double)(s*c/100);
        //cout<<p<<endl;
        if(p>=a && p<=b)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
	}
	return 0;
}
