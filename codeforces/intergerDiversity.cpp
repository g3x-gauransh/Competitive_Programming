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
typedef pair<int,int> pi;

int main()
{
	fast
	T
	{
		int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        map<int,int> m;
        for(int i=0;i<n;i++){
            m[a[i]]++;
        }
        for(auto it:m){
            if(it.second>1){
                m[-it.first]++;
                m[it.first]--;
            }
        }
        int count=0;
        for(auto it:m){
            if(it.second>0)
                count++;
        }
        cout<<count<<endl;
	}
	return 0;
}
