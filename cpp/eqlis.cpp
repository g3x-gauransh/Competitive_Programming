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
        if(n==2)
            cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            if(n&1){
                for(int i=1;i<=(n/2);i++){
                    cout<<i<<" ";
                }
                for(int i=n;i>(n/2);i--){
                    cout<<i<<" ";
                }
                cout<<endl;
           }
           else{
               for(int i=2;i<=n/2;i++){
                   cout<<i<<" ";
               }
               cout<<"1"<<" ";
               for(int i=n;i>n/2;i--){
                   cout<<i<<" ";
               }
               cout<<endl;
           }
        }
	}
	return 0;
}
