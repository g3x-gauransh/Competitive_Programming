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
        vector<string>s(n);
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        string ans="";
        for(int i=0;i<n;i++){
            if(s[i][i]=='1')
                ans+='0';
            else
                ans+='1';
        }
        cout<<ans<<endl;
        
	}
	return 0;
}
