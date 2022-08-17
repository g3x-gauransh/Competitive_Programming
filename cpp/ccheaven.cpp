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
        int l;
        string s;
        cin>>l>>s;
        int c1=0;
        int flag=0;
        for(int i=0;i<l;i++){
            if(s[i]=='1')   
                c1++;

            if(c1>0)
            {
                int h= (c1*100)/(i+1);
                if(h>=50){
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
	}
	return 0;
}
