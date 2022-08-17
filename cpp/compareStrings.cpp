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
		string s1,s2;
        int n;
        cin>>n;

        cin>>s1>>s2;
        
        int ans=0;
        for(int i=0;i<n;i++){
            string a=s1.substr(i,n);
            string b=s2.substr(i,n);

            if(a<b)
                ans++;
        }
        cout<<ans<<endl;
	}
	return 0;
}
