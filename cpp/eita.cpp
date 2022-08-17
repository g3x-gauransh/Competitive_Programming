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
	T
	{
        int d,x,y,z;
        cin>>d>>x>>y>>z;
        int strat1= 7*x;
        int strat2= d*y + (7-d)* z;
        cout<<max(strat1,strat2)<<endl;
	}
	return 0;
}
