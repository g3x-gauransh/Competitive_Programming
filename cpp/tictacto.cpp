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
        int n,m,k;
        cin>>n>>m>>k;
        vector<pair<int,int>> a;
        for(int i=0;i<n*m;i++){
            int x,y;
            cin>>x>>y;
            x--;
            y--;
            a.pb({x,y});
        }
        int l=0,r=n*m-1,ans=n*m;
        while(l<r){
            int mid=l+(r-l)/2;
            
        }
	}
	return 0;
}
