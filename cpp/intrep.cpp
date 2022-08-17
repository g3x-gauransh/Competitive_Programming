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
		ll n;
        cin>>n;
        
        if(n%2==0)
            cout<<n*2<<" "<<n<<endl;
        else{
            vector<int> v={3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59};
                ll a;
                for(auto it:v){
                if(n%it!=0){
                   a=it;
                   break;
                }
            }
            cout<<a*n<<" "<<(a-1)*n<<endl;

        }
    }
	return 0;
}
