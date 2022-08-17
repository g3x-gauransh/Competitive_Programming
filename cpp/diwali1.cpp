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
		string s;
        cin>>s;
        int a=0,b=0,c=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='A')
                a++;
            else if(s[i]=='B')
                b++;
            else    
                c++;
        }

        if(b==a+c)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
	}
	return 0;
}
