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
		ll k;
        cin>>k;
        ll temp=2;
        int p=0;
        if(k&1)
            cout<<"0"<<endl;
        else{
            while(k%temp==0){
                temp*=2;
                p++;
            }
            cout<<p<<endl;
        }
	}
	return 0;
}
