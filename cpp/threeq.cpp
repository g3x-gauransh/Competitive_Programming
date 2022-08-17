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
        map<int,int>a;
        for(int i=0;i<3;i++){
            int x;
            cin>>x;
            a[x]++;
        }
        int c1=0,c0=0;
        for(int i=0;i<3;i++){
            int x;
            cin>>x;
            if(x==1)
                c1++;
            else    
                c0++;
        }

        if(c1==a[1] && c0== a[0])
            cout<<"Pass"<<endl;
        else    
            cout<<"Fail"<<endl;
	}
	return 0;
}
