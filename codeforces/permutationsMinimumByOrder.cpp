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
        vector<int>v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];

        deque<int> q;
        q.push_back(v[0]);
        for(int i=1;i<n;i++){
            if(v[i]<=q.front()){
                q.push_front(v[i]);
            }
            else{
                q.push_back(v[i]);
            }
        }

        while(!q.empty()){
            int c=q.front();
            cout<<c<<" ";
            q.pop_front();
        }
        cout<<endl;
	}
	return 0;
}
