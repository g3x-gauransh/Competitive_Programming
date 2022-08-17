#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define MOD 1e9+7
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
        int n,k;
        cin>>n>>k;
        priority_queue<int,vector<int>,greater<int> > pq;

        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            pq.push(x);
        }
        
        while(!pq.empty() && k--){
            if(pq.top()<0){
                int x=pq.top();
                x*=-1;
                pq.pop();
                pq.push(x);
            }
            else{
                break;
            }
        }
		
        while(pq.top()<0 && !pq.empty()){
            pq.pop();
        }

        int sum=0;
        while(!pq.empty())
        {
            sum+=pq.top();
            pq.pop();
        }
        cout<<sum<<endl;
	}
	return 0;
}
