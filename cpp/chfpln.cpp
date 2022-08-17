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
        int n;
        cin>>n;
        vector<int> a;
        vector<int> freq(100001,0);
        vector<int> visited(100001,0);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.pb(x);
            freq[x]++;
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(!visited[a[i]]){
                if(freq[a[i]]>a[i]-1){
                    count+=a[i]-1;
                }
                else{
                    count+=freq[a[i]];
                }
                visited[a[i]]=1;
            }
        }
        // for(int i=0;i<20;i++)
        //     cout<<freq[i]<<" ";
        // cout<<endl;
        cout<<count<<endl;
	}
	return 0;
}
