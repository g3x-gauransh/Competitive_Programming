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
        int n,q;
        vector <ll> a;
        cin>>n>>q;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            a.pb(x);
        }
        sort(a.begin(),a.end());

        for(int i=0;i<q;i++){
            int countp=0;
            int countn=0;
            ll x;
            cin>>x;
            auto lower= lower_bound(a.begin(),a.end(),x);
            int pos= lower-a.begin();
            if(a[pos]==x){
                cout<<"0"<<endl;
            }
            else{
                if((n-pos)%2==0){
                    cout<<"POSITIVE"<<endl;
                }
                else{
                    cout<<"NEGATIVE"<<endl;
                }
            }
        }
	return 0;
}
