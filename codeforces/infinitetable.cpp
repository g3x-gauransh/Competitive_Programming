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
        ll k;
        cin>>k;
        int p=0;
        int m=100001;
        for(int i=0;i<m;i++){
            if(i*i>=k)
            {
                 p=i;
                 break;
            }
        }
        k-=(p-1)*(p-1);

        if(k<=p){
            cout<<k<<" "<<p<<endl;
            continue;
        }
        k-=p;
            cout<<p<<" "<<p-k<<endl;
    }
	return 0;
}
