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
        ll n;
        cin>>n;
        if(n==1){
            cout<<"20"<<endl;
        }
        else if(n==2)
        {
            cout<<"36"<<endl;
        }
        else if(n==3)
        {
            cout<<"51"<<endl;
        }
        else if(n==4)
        {
            cout<<"60"<<endl;
        }
        else{
            ll r=n%4;
            ll k=n/4;
            ll ans;
            if(r==1){
                ans=44*k+32;
            }
            else if(r==2){
                ans=44*(k+1);
            }
            else if(r==3){
                ans=44*k+55;
            }
            else{
                ans=44*k+16;
            }
            cout<<ans<<endl;
        }
	}
	return 0;
}
