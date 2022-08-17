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
		string s;
        cin>>s;
        int len=s.size();
        int a=s[len-1]-'0';
        int l=s[0]-'0';
        if(!(a&1))
            cout<<"0"<<endl;
        else if(!(l&1) && (a&1)){
            cout<<"1"<<endl;
        }
        else{
            int f=0;
            for(int i=0;i<len;i++){
                int b=s[i]-'0';
                if(!(b&1))
                {
                    f=1;
                    break;
                }
            }
            if(f)
                cout<<"2"<<endl;
            else
                cout<<"-1"<<endl;
        }
	}
	return 0;
}
