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
        vector <int> a;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.pb(x);
        }
        int count=0;        //should be 7
        int ans=0;          //may not be 7

        for(int i=0;i<n;i++){
            if(count==7){
                break;
            }
            if(a[i]<=7){
                count++;
                ans++;
            }
            else{
                ans++;
            }
        }
        cout<<ans<<endl;
	}
	return 0;
}
