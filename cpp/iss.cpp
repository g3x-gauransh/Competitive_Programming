#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define MOD 1e9+7
#define pb push_back
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define T int t;cin>>t;while(t--)
using namespace std;

int gcd(int a,int b){
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}

int main()
{
	fast
	T
	{
        int k;
        cin>>k;
        vector<int> a;
        for(int i=1;i<=2*k+1;i++){
            int x=i*i+k;
            a.pb(x);
        }
        int sum=0;
        // for(auto it:a){
        //     cout<<it<<" ";
        // }
        //cout<<endl;
        for(int i=0;i<2*k;i++){
            int x=gcd(a[i],a[i+1]);
            //cout<<x<<" ";
            sum+=x;
        }
        cout<<sum<<endl;
	}
	return 0;
}
