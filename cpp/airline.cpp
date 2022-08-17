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
		int a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;

        bool flag=false;
        
        if(a+b<=d && c<=e)
            flag=true;
        else if(b+c<=d && a<=e)
            flag=true;
        else if(a+c<=d && b<=e)
            flag=true;
        else
            flag=false;
    
        if(flag)
            cout<<"YES"<<endl;
        else{
            cout<<"NO"<<endl;
        }
	}
	return 0;
}
