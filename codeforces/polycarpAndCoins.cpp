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
        ll n;
        cin>>n;
        ll c1,c2;
        c1=n/3;
        c2=n/3;
        if(n%3==1)
            c1++;
        else if(n%3==2)
            c2++;
        cout<<c1<<" "<<c2<<endl;
	}
	return 0;
}
