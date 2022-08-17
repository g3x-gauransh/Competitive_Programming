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
		int n;
        cin>>n;
        vector<ll> v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];

        map<int,int> m;
        for(int i=0;i<n;i++){
            int rem=v[i]%3;
            m[rem]++;
        }

        int ans=0;
        m[2]=m[2]-min(m[2],m[1]);
        m[1]=m[1]-min(m[1],m[2]);

        if(m[2]>0)
        {
            if(m[2]%3==0){
                ans = ans +(m[2]/3)*2;
            }
            else ans=-1;
        }
        else{
            if(m[1]%3==0){
                ans+=(m[1]/3)*2;
            }
            else
                ans=-1;
        }
        cout<<ans<<endl;
	}
	return 0;
}
