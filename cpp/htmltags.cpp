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
        string s;
        cin>>s;
        int flag=0;
        if(s[0]=='<' && s[1]=='/' && s[s.size()-1]=='>'){
            flag=1;
        }
        int ans=1;
        if(flag==1){
            for(int i=2;i<s.size()-1;i++){
                if((s[i]>='A' && s[i]<='Z') || (s[i]>='!' && s[i]<='/') || (s[i]>=':' && s[i]<='@') || (s[i]>='{'& s[i]<='~') ){
                    ans=0;
                    break;
                }
            }
        }
        else{
            ans=0;
        }
        if(flag==1 && s.size()==3)
            ans=0;
        if(ans==0){
            cout<<"Error"<<endl;
        }
        else{
            cout<<"Success"<<endl;
        }
	}
	return 0;
}
