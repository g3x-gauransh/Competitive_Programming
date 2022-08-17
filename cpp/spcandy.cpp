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
        ll n,k;
        cin>>n>>k;
        ll div,rem;
        if(k==0){
            div=0;
            rem=n;
        }
        else{
            div=n/k;
            rem=n%k;
        }
        cout<<div<<" "<<rem<<endl;
	}
	return 0;
}
