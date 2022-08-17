#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define MOD 10000007
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
		int a,b,c,d;
        cin>>a>>b>>c>>d;
        int sum=a+b+c;
        if(a+b+c<=d)
            cout<<"1"<<endl;
        else if(b+a<=d)
            cout<<"2"<<endl;
        else
            cout<<"3"<<endl;
	}
	return 0;
}
