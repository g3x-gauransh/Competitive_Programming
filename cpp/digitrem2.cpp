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
		ll n,d;
        cin>>n>>d;
        ll temp=n;
        ll ans=0;
        int count=0;
        while(temp>0){
            int rem=temp%10;
            temp/=10;
            count++;

            if(rem==d){
                temp = temp*pow(10,count)+ (rem+1)*pow(10,count-1);
                ans=temp-n;
                count=0;
            }
        }
        cout<<ans<<endl;
	}
	return 0;
}
