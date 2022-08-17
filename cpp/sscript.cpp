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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int count=0;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            if(s[i]=='*'){
                count++;
            }
            else{
                maxi=max(count,maxi);
                count=0;
            }
        }
       
        if(maxi>=k || count>=k)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
	}
	return 0;
}
