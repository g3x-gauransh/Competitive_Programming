#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define MOD 10000007
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
        ll l,r;
        cin>>l>>r;
        

        // ll diff=r-l;
        // ll count=diff/3;
        // if(l%3==0 || r%3==0){
        //     count++;
        // }
        // else{
        //     if(diff==2)
        //         count++;
        // }
        // cout<<count<<endl;
        int flag=1;
        for(int i=0;i<3;i++){
            if(l>r)
                flag=0;
            if(l<=r && l%3==0)
                break;
            else 
                l++;
        }
        for(int j=0;j<3;j++){
            if(l<=r && r%3==0)
                break;
            else
                r--;
        }
        if(!flag){
            cout<<"0"<<endl;
        }
        else{
            ll a=r/3;
            ll b=l/3;

            ll ans=abs(b-a)+1;
            cout<<ans<<endl;
        }
        
	}
	return 0;
}
