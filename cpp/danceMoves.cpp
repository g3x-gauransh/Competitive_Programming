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

int main()
{
	fast
	T
	{
		int x,y;
        cin>>x>>y;
        int ans=0;
        if(x>y){
            ans=x-y;
        }
        else{
            ans=(y-x);
            int flag=0;
            if(ans&1)
                flag=1;
            ans/=2;
            if(flag)
                ans+=2;
        }

        cout<<ans<<endl;
    }

	return 0;
}
    