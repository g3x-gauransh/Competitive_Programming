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
        int n;
        cin>>n;
        vector<int> ans;
        vector<int> odd;
        vector<int> even;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x%2==0){
                even.pb(x);
            }
            else{
                odd.pb(x);
            }
        }
        int i=0;
        while(i<even.size()){
            ans.pb(even[i++]);
        }
        int j=0;
        while(j<odd.size()){
            ans.pb(odd[j++]);
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
}
