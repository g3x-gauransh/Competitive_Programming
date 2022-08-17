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
        int n;
        cin>>n;
        vector<ll> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];

        vector<vector<ll> >ans; 
        for(int i=0;i<n;i++){
            auto itr=max_element(a.begin(),a.end())-a.begin();

            if(itr!=n-i-1)
                ans.push_back({itr+1,n-i,1});

            a.erase(itr+a.begin());
        }

        cout<<ans.size()<<endl;
        for(auto it:ans){
            cout<<it[0]<<" "<<it[1]<<" "<<it[2]<<endl;
        }

	}
	return 0;
}
