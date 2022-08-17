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
        ll n,x,k;
        cin>>n>>x>>k;
        if(k==1)
            cout<<"YES"<<endl;
        else{
            if(x%k==0){
                cout<<"YES"<<endl;
            }
            else{
                int flag=0;
                int i=0;
                if(x%k==(n+1)%k)
                    flag=1;
                if(flag==1){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
	}
	return 0;
}
