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
        ll a,b,score1=0,score2=0;
        int n;
        string s;
        cin>>n>>a>>b;
        for(int i=0;i<n;i++){
            cin>>s;

            if(s[0]=='E' || s[0]=='Q'|| s[0]=='U'|| s[0]=='I'|| s[0]=='N'|| s[0]=='O'|| s[0]=='X'){
                score1+=a;
            }
            else{
                score2+=b;
            }
        }
        if(score1>score2)
            cout<<"SARTHAK"<<endl;
        else if(score1<score2)  
            cout<<"ANURADHA"<<endl;
        else
            cout<<"DRAW"<<endl;
	}
	return 0;
}
