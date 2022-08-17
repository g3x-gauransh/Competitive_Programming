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
        int d,D,a,b,c;
        cin>>D>>d>>a>>b>>c;
        const int dista=10,distb=21,distc=42;
        int total=d*D;
        if(total>=distc){
            cout<<c<<endl;
        }
        else if(total >=distb){
            cout<<b<<endl;
        }
        else if(total >=dista){
            cout<<a<<endl;
        }
        else {
            cout<<"0"<<endl;
        }
	}
	return 0;
}
