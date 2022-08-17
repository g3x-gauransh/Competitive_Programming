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
typedef pair<int,int> pi;

int main()
{
	fast
	T
	{
		int a,b,c;
        cin>>a>>b>>c;
        if(b-a==c-b || (a==b && c==b))
            cout<<"YES"<<endl;
        else if((2*b-a)%c==0 && 2*b-a>0)
            cout<<"YES"<<endl;
        else if((2*b-c)%a==0 && 2*b-c>0)
            cout<<"YES"<<endl;
        else if((a+c)%(2*b)==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
	}
	return 0;
}
