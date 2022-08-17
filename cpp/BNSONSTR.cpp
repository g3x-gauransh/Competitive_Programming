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
        string s;
        cin>>s;
        int total_ones=0,total_zeros=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1')
                total_ones++;
            else
                total_zeros++;
        }

        vector <int> factors;
        for(int i=1;i<=n;i++){
            if(n%i==0)
                factors.pb(i);
        }
        
        int ans=INT_MAX;

        for(auto factor:factors){
            vector<int> zero(factor,0),one(factor,0);
            for(int i=0;i<n;i++){
                if(s[i]=='1'){
                    one[i%factor]++;
                }
                else{
                    zero[i%factor]++;
                }
            }

            for(int i=0;i<factor;i++){
                ans=min(ans,zero[i]+(total_ones-one[i]));
            }
        }
        cout<<ans<<endl;
	}
	return 0;
}
