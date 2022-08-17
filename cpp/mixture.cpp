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
    T{
        int a,b;
    cin>>a>>b;
    if(a>0 && b>0)
        cout<<"Solution"<<endl;
    else if(a>0 && b==0)
        cout<<"Solid"<<endl;
    else if(b>0 && a==0)
        cout<<"Liquid"<<endl;
    }
	
	return 0;
}
