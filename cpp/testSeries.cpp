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

int main()
{
	fast
	T
	{
		vector<int> r(5);
        for(int i=0;i<5;i++)
            cin>>r[i];

        int icount=0,ecount=0;
        for(auto it:r){
            if(it==1)
                icount++;
            else if(it==2)
                ecount++;
        }

        if(icount==ecount)
            cout<<"DRAW"<<endl;
        else if(icount>ecount)
            cout<<"INDIA"<<endl;
        else    
            cout<<"ENGLAND"<<endl;
	}
	return 0;
}
