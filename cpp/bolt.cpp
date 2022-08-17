#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define MOD 1e9+7
#define pb push_back
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define T int t;cin>>t;while(t--)
using namespace std;

float r(float var)
{
    float value=(int)(var * 100 +0.5);
    return (float)(value/100);
}
int main()
{
	fast
	T
	{
        float k1,k2,k3,v;
        float comp=9.58;
        cin>>k1>>k2>>k3>>v;
        float ans;
        ans=k1*k2*k3*v;
        float ans1=(100)/ans;
        float ans2=r(ans1);
        if(ans2 < comp) 
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        //cout<<ans1<<" "<<ans2<<endl;
	}
	return 0;
}
