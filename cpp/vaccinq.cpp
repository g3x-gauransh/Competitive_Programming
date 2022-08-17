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
		int n,x,y,p;
        cin>>n>>p>>x>>y;
        vector<int> v(n);
        for(int i=0;i<n;i++)    
            cin>>v[i];

        int count=0;
        for(int i=0;i<p;i++){
            if(v[i]==1)
                count+=y;
            else
                count+=x;
        }
        cout<<count<<endl;
	}
	return 0;
}
